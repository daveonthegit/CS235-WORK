/*
CSCI235 Summer 2023
Project 2 - Classes
David Xiao
9/19/23
Barbarian.cpp implements the Barbarian class along with its private and public members
*/
#include "Barbarian.hpp"

Barbarian::Barbarian() : Character(), main_weapon_{ "NONE" }, secondary_weapon_{ "NONE" }, enraged_{ false } {
    // Default constructor initializes private members.
}

Barbarian::Barbarian(const std::string& name, const std::string& race, int vitality, int armor, int level, bool enemy,
const std::string& main_weapon, const std::string& secondary_weapon, bool enraged)
    : Character(name, race, vitality, armor, level, enemy) {
    // Parameterized constructor initializes private members based on input parameters.

    // Set the character's main weapon.
    setMainWeapon(main_weapon);

    // Set the character's secondary weapon.
    setSecondaryWeapon(secondary_weapon);

    // Set whether the character is enraged.
    enraged_ = enraged;
}
bool Barbarian::setMainWeapon(const std::string& main_weapon) {
    std::string main_weapon_upper = "";
    for (int i = 0; i < main_weapon.size(); i++) {
        if (std::isalpha(main_weapon[i])) {
            main_weapon_upper += toupper(main_weapon[i]);
        }
    }

    // Check if the input contains only alphabetical characters.
    if (main_weapon_upper != "" && std::isalpha(main_weapon_upper[0])) {
        // Set the character's main weapon to the valid input.
        main_weapon_ = main_weapon_upper;
        return true;
    } else {
        // Invalid input, do nothing and return false.
        return false;
    }
}

std::string Barbarian::getMainWeapon() const {
    // Return the string indicating the character's main weapon.
    return main_weapon_;
}

bool Barbarian::setSecondaryWeapon(const std::string& secondary_weapon) {
    std::string secondary_weapon_upper = "";
    for (int i = 0; i < secondary_weapon.size(); i++) {
        if (std::isalpha(secondary_weapon[i])) {
            secondary_weapon_upper += toupper(secondary_weapon[i]);
        }
    }

    // Check if the input contains only alphabetical characters.
    if (secondary_weapon_upper != "" && std::isalpha(secondary_weapon_upper[0])) {
        // Set the character's secondary weapon to the valid input.
        secondary_weapon_ = secondary_weapon_upper;
        return true;
    } else {
        // Invalid input, do nothing and return false.
        return false;
    }
}

std::string Barbarian::getSecondaryWeapon() const {
    // Return the string indicating the character's secondary weapon.
    return secondary_weapon_;
}

void Barbarian::setEnrage(const bool& enraged) {
    // Set whether the character is enraged.
    enraged_ = enraged;
}

bool Barbarian::getEnrage() const {
    // Return whether the character is enraged.
    return enraged_;
}

void Barbarian::toggleEnrage() {
    // Toggle the enraged variable (switch between true and false).
    enraged_ = !enraged_;
}