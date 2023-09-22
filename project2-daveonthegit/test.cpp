/*
CSCI235 Summer 2023
Project 2 - Classes
David Xiao
9/19/23
Test file for classes.
*/

#include <iostream>
#include "Character.hpp"
#include "Mage.hpp"
#include "Scoundrel.hpp"
#include "Barbarian.hpp"
#include "Ranger.hpp"

int main() {
    //2.1.1
    Mage default_mage;
    default_mage.setName("defaultMage");
    default_mage.setRace("ELF");
    default_mage.setVitality(5);
    default_mage.setArmor(3);
    default_mage.setLevel(2);
    default_mage.setEnemy();
    std::cout << "Information for defaultMage:" << std::endl;
    std::cout << "Name: " << default_mage.getName() << std::endl;
    std::cout << "Race: " << default_mage.getRace() << std::endl;
    std::cout << "Vitality: " << default_mage.getVitality() << std::endl;
    std::cout << "Armor: " << default_mage.getArmor() << std::endl;
    std::cout << "Level: " << default_mage.getLevel() << std::endl;
    std::cout << "Enemy: " << default_mage.isEnemy() << std::endl;
    std::cout << std::endl;

    // 2.1.2
    Mage spynach("SPYNACH", "ELF", 6, 4, 4, false);
    spynach.setSchool("Illusion");
    spynach.setCastingWeapon("Wand");
    spynach.setIncarnateSummon(true);
    
    std::cout << "Information for SPYNACH:" << std::endl;
    std::cout << "Name: " << spynach.getName() << std::endl;
    std::cout << "Race: " << spynach.getRace() << std::endl;
    std::cout << "Vitality: " << spynach.getVitality() << std::endl;
    std::cout << "Armor: " << spynach.getArmor() << std::endl;
    std::cout << "Level: " << spynach.getLevel() << std::endl;
    std::cout << "Enemy: " << spynach.isEnemy() << std::endl;
    std::cout << "School of Magic: " << spynach.getSchool() << std::endl;
    std::cout << "Weapon: " << spynach.getCastingWeapon() << std::endl;
    std::cout << "Summon Incarnate: " << spynach.hasIncarnateSummon() << std::endl;
    std::cout << std::endl;

    // 2.2.1
    Scoundrel default_scoundrel;
    default_scoundrel.setName("defaultScoundrel");
    default_scoundrel.setRace("HUMAN");
    default_scoundrel.setVitality(6);
    default_scoundrel.setArmor(4);
    default_scoundrel.setLevel(3);
    default_scoundrel.setEnemy();

    std::cout << "Information for defaultScoundrel:" << std::endl;
    std::cout << "Name: " << default_scoundrel.getName() << std::endl;
    std::cout << "Race: " << default_scoundrel.getRace() << std::endl;
    std::cout << "Vitality: " << default_scoundrel.getVitality() << std::endl;
    std::cout << "Armor: " << default_scoundrel.getArmor() << std::endl;
    std::cout << "Level: " << default_scoundrel.getLevel() << std::endl;
    std::cout << "Enemy: " << default_scoundrel.isEnemy() << std::endl;
    std::cout << std::endl;

    // 2.2.2 
    Scoundrel flea("FLEA", "DWARF", 12, 7, 5, false);
    flea.setDagger("Adamant");
    flea.setFaction("Cutpurse");
    flea.setDisguise(true);

    std::cout << "Information for FLEA:" << std::endl;
    std::cout << "Name: " << flea.getName() << std::endl;
    std::cout << "Race: " << flea.getRace() << std::endl;
    std::cout << "Vitality: " << flea.getVitality() << std::endl;
    std::cout << "Armor: " << flea.getArmor() << std::endl;
    std::cout << "Level: " << flea.getLevel() << std::endl;
    std::cout << "Enemy: " << flea.isEnemy() << std::endl;
    std::cout << "Dagger: " << flea.getDagger() << std::endl;
    std::cout << "Faction: " << flea.getFaction() << std::endl;
    std::cout << "Disguise: " << flea.hasDisguise() << std::endl;
    std::cout << std::endl;

    // 2.3.1 
    Ranger default_ranger;
    default_ranger.setName("defaultRanger");
    default_ranger.setRace("UNDEAD");
    default_ranger.setVitality(8);
    default_ranger.setArmor(4);
    default_ranger.setLevel(5);
    default_ranger.setEnemy();

    std::cout << "Information for defaultRanger:" << std::endl;
    std::cout << "Name: " << default_ranger.getName() << std::endl;
    std::cout << "Race: " << default_ranger.getRace() << std::endl;
    std::cout << "Vitality: " << default_ranger.getVitality() << std::endl;
    std::cout << "Armor: " << default_ranger.getArmor() << std::endl;
    std::cout << "Level: " << default_ranger.getLevel() << std::endl;
    std::cout << "Enemy: " << default_ranger.isEnemy() << std::endl;
    std::cout << std::endl;

    // 2.3.2
    // Create a parameterized Ranger object
    Ranger marrow("MARROW", "UNDEAD", 9, 6, 5, true);
    marrow.addArrows("Wood", 30);
    marrow.addArrows("Fire", 5);
    marrow.addArrows("Water", 5);
    marrow.addArrows("Poison", 5);
    marrow.addAffinity("Fire");
    marrow.addAffinity("Poison");
    marrow.setCompanion(true);

    // Display attributes of the parameterized Ranger
    std::cout << "Name: " << marrow.getName() << std::endl;
    std::cout << "Race: " << marrow.getRace() << std::endl;
    std::cout << "Vitality: " << marrow.getVitality() << std::endl;
    std::cout << "Armor: " << marrow.getArmor() << std::endl;
    std::cout << "Level: " << marrow.getLevel() << std::endl;

    // Display the Ranger's arrows
    const std::vector<Arrows>& arrows = marrow.getArrows();
    for (int i = 0; i < arrows.size(); i++) {
        std::cout << "Arrow Type: " << arrows[i].type_ << ", Quantity: " << arrows[i].quantity_ << std::endl;
    }

    // Display the Ranger's affinities
    const std::vector<std::string>& affinities = marrow.getAffinities();
    for (int i = 0; i < affinities.size(); i++) {
        std::cout << "Affinity: " << affinities[i] << std::endl;
    }

    // Check if the Ranger has a companion
    if (marrow.getCompanion()) {
        std::cout << "Has a companion: Yes" << std::endl;
    } else {
        std::cout << "Has a companion: No" << std::endl;
    }

    // Check if the Ranger is an enemy
    if (marrow.isEnemy()) {
        std::cout << "Enemy: TRUE" << std::endl;
    } else {
        std::cout << "Enemy: FALSE" << std::endl;
    }
    // 2.4.1 
    Barbarian default_barbarian;
    default_barbarian.setName("defaultBarbarian");
    default_barbarian.setRace("HUMAN");
    default_barbarian.setVitality(10);
    default_barbarian.setArmor(5);
    default_barbarian.setLevel(5);
    default_barbarian.setEnemy();

    std::cout << "Information for defaultBarbarian:" << std::endl;
    std::cout << "Name: " << default_barbarian.getName() << std::endl;
    std::cout << "Race: " << default_barbarian.getRace() << std::endl;
    std::cout << "Vitality: " << default_barbarian.getVitality() << std::endl;
    std::cout << "Armor: " << default_barbarian.getArmor() << std::endl;
    std::cout << "Level: " << default_barbarian.getLevel() << std::endl;
    std::cout << "Enemy: " << default_barbarian.isEnemy() << std::endl;
    std::cout << std::endl;

    // 2.4.2
    Barbarian bonk("BONK", "HUMAN", 11, 5, 5, true);
    bonk.setMainWeapon("MACE");
    bonk.setSecondaryWeapon("ANOTHERMACE");
    bonk.setEnrage(true);

    std::cout << "Information for BONK:" << std::endl;
    std::cout << "Name: " << bonk.getName() << std::endl;
    std::cout << "Race: " << bonk.getRace() << std::endl;
    std::cout << "Vitality: " << bonk.getVitality() << std::endl;
    std::cout << "Armor: " << bonk.getArmor() << std::endl;
    std::cout << "Level: " << bonk.getLevel() << std::endl;
    std::cout << "Enemy: " << bonk.isEnemy() << std::endl;
    std::cout << "Main Weapon: " << bonk.getMainWeapon() << std::endl;
    std::cout << "Secondary Weapon: " << bonk.getSecondaryWeapon() << std::endl;
    std::cout << "Enraged: " << bonk.getEnrage() << std::endl;
    std::cout << std::endl;

    return 0;
}