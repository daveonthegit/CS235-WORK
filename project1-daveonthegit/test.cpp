/*
Author: David Xiao
Course: CSCI-235
Instructor: Tiziana Ligorio
Assignment: Project 1
*/
#include "Character.hpp"
#include <iostream>
#include <string>

void test(){
    int temp_level = -5;
    int temp_vitality = 500;
    int temp_armor = 400;
    std::string temp_race="ELF";
    std::string temp_name = "DV2AR4343";
    Character dft;
    std::cout << "Name: " << dft.getName() << std::endl;
    std::cout << "Race: " << dft.getRace() << std::endl;
    std::cout << "Vitality: " << dft.getVitality() << std::endl;
    std::cout << "Armor: " << dft.getArmor() << std::endl;
    std::cout << "Level: " << dft.getLevel() << std::endl;
    std::cout << "Is Enemy: " << (dft.isEnemy() ? "Yes" : "No") << std::endl;
    temp_race="HUMAN";
    temp_name = "JOHN";
    Character john(temp_name, temp_race);
    std::cout << "Name: " << john.getName() << std::endl;
    std::cout << "Race: " << john.getRace() << std::endl;
    std::cout << "Vitality: " << john.getVitality() << std::endl;
    std::cout << "Armor: " << john.getArmor() << std::endl;
    std::cout << "Level: " << john.getLevel() << std::endl;
    std::cout << "Is Enemy: " << (john.isEnemy() ? "Yes" : "No") << std::endl;
    temp_race="DWARF";
    temp_name = "DVAR";
    Character dvar(temp_name, temp_race,50,49,4,true);
    std::cout << "Name: " << dvar.getName() << std::endl;
    std::cout << "Race: " << dvar.getRace() << std::endl;
    std::cout << "Vitality: " << dvar.getVitality() << std::endl;
    std::cout << "Armor: " << dvar.getArmor() << std::endl;
    std::cout << "Level: " << dvar.getLevel() << std::endl;
    std::cout << "Is Enemy: " << (dvar.isEnemy() ? "Yes" : "No") << std::endl;
    temp_race="ELF";
    temp_name = "D412VA3R43";
    dvar.setLevel(temp_level);
    dvar.setVitality(temp_vitality);
    dvar.setArmor(temp_armor);
    dvar.setEnemy();
    dvar.setRace(temp_race);
    dvar.setName(temp_name);
    std::cout << "Name: " << dvar.getName() << std::endl;
    std::cout << "Race: " << dvar.getRace() << std::endl;
    std::cout << "Vitality: " << dvar.getVitality() << std::endl;
    std::cout << "Armor: " << dvar.getArmor() << std::endl;
    std::cout << "Level: " << dvar.getLevel() << std::endl;
    std::cout << "Is Enemy: " << (dvar.isEnemy() ? "Yes" : "No") << std::endl;
}