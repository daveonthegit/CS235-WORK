/*
CSCI235 Summer 2023
Project 2 - Classes
David Xiao
9/19/23
Mage.cpp implements the Mage class along with its private and public members
*/
#include "Mage.hpp"
Mage::Mage():Character() ,school_of_magic_{"NONE"},weapon_{"NONE"}, can_summon_incarnate_{false}
{
}

Mage::Mage(const std::string& name, const std::string& race, int vitality, int armor, int level, bool enemy, 
         const std::string& school_of_magic, const std::string& weapon, bool can_summon_incarnate):Character(name, race, vitality, armor, level, enemy)
{
    if(!setSchool(school_of_magic)){
        school_of_magic_="NONE";
    }
    if(!setCastingWeapon(weapon)){
        weapon_="NONE";
    }
    can_summon_incarnate_=can_summon_incarnate;
}

bool Mage::setSchool(const std::string& school){
    std::string schoolUpper = "";
    for(int i= 0; i<school.size();i++){
        if(std::isalpha(school[i]))
        {
            schoolUpper+= toupper(school[i]);
        }
    }
    if(schoolUpper!= ""&&(schoolUpper=="ELEMENTAL"||
    (schoolUpper=="NECROMANCY"||schoolUpper=="ILLUSION"))){
    //schoolUpper must be larger than 0 char, and == to a school
        school_of_magic_=schoolUpper;
        return true;
    }else{
        return false;
    }
}

std::string Mage::getSchool()const{
    return school_of_magic_;
}

bool Mage::setCastingWeapon(const std::string& weapon){
    std::string weaponUpper = "";
    for(int i= 0; i<weapon.size();i++){
        if(std::isalpha(weapon[i]))
        {
            weaponUpper+= toupper(weapon[i]);
        }
    }
    if(weaponUpper!= ""&&(weaponUpper=="WAND"||weaponUpper=="STAFF")){
        weapon_=weaponUpper;
        return true;
    }else{
        return false;
    }
}

std::string Mage::getCastingWeapon()const{
    return weapon_;
}

void Mage::setIncarnateSummon(const bool& incarnate){
    can_summon_incarnate_ =incarnate;
}

bool Mage::hasIncarnateSummon() const{
    return can_summon_incarnate_;
}