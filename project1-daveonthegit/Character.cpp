/*
Author: David Xiao
Course: CSCI-235
Instructor: Tiziana Ligorio
Assignment: Project 1
*/
#include "Character.hpp"

Character::Character() {
    name_ = "NAMELESS";
    race_ = NONE;
    vitality_ = 0;
    armor_ = 0;
    level_ = 0;
    enemy_ = false;
}

Character::Character(const std::string& new_name, const std::string& new_race, int new_vitality, int new_armor, int new_level, bool new_enemy) {
    name_ = new_name;
    if (new_race == "HUMAN") {
        race_ = HUMAN;
    } else if (new_race == "ELF") {
        race_ = ELF;
    } else if (new_race == "DWARF") {
        race_ = DWARF;
    } else if (new_race == "LIZARD") {
        race_ = LIZARD;
    } else if (new_race == "UNDEAD") {
        race_ = UNDEAD;
    } else {
        race_ = NONE;
    }
    vitality_ = new_vitality;
    armor_ = new_armor;
    level_ = new_level;
    enemy_ = new_enemy;
}

void Character::setName(const std::string& new_name) {
    name_ = "";
    for (char temp_character : new_name) {
        if (isalpha(temp_character)) {
            temp_character = toupper(temp_character);
            name_ += temp_character;
        }
    }
    if (name_ == "") {
        name_ = "NAMELESS";
    }
}

std::string Character::getName() const {
    return name_;
}

void Character::setRace(const std::string& new_race) {
    if (new_race == "HUMAN") {
        race_ = HUMAN;
    } else if (new_race == "ELF") {
        race_ = ELF;
    } else if (new_race == "DWARF") {
        race_ = DWARF;
    } else if (new_race == "LIZARD") {
        race_ = LIZARD;
    } else if (new_race == "UNDEAD") {
        race_ = UNDEAD;
    } else {
        race_ = NONE;
    }
}

std::string Character::getRace() const {
    if (race_ == HUMAN) {
        return "HUMAN";
    } else if (race_ == ELF) {
        return "ELF";
    } else if (race_ == DWARF) {
        return "DWARF";
    } else if (race_ == LIZARD) {
        return "LIZARD";
    } else if (race_ == UNDEAD) {
        return "UNDEAD";
    } 
        return "NONE";
}

void Character::setVitality(const int& new_vitality) {
    if (new_vitality >=0)
        this->vitality_ = new_vitality;
}

int Character::getVitality() const {
    return vitality_;
}

void Character::setArmor(const int& new_armor) {
    if (new_armor >=0)
        this->armor_ = new_armor;
}

int Character::getArmor() const {
    return armor_;
}

void Character::setLevel(const int& new_level) {
    if (new_level >=0)
        this->level_ = new_level;
}

int Character::getLevel() const {
    return level_;
}

void Character::setEnemy() {
    enemy_ = true;
}

bool Character::isEnemy() const {
    return enemy_;
}