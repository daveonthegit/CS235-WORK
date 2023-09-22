/*
CSCI235 Summer 2023
Project 2 - Classes
David Xiao
9/19/23
Scoundrel.cpp implements the Scoundrel class along with its private and public members
*/
#include "Scoundrel.hpp"

Scoundrel::Scoundrel() : Character(), dagger_{ WOOD }, faction_{ "NONE" }, has_disguise_{ false } {
    // Default constructor initializes private members.
}

Scoundrel::Scoundrel(const std::string& name, const std::string& race, int vitality, int armor, int level, bool enemy , 
const std::string& dagger, const std::string& faction, bool disguise)
    : Character(name, race, vitality, armor, level, enemy) {
    // Parameterized constructor initializes private members based on input parameters.

    // Set the character's dagger type.
    setDagger(dagger);

    // Set the character's faction or default to "NONE" if the provided faction is invalid.
    if (!setFaction(faction)) {
        faction_ = "NONE";
    }

    // Set whether the character has a disguise.
    has_disguise_ = disguise;
}

void Scoundrel::setDagger(const std::string& dagger) {
    std::string dagger_upper = "";
    for (int i = 0; i < dagger.size(); i++) {
        if (std::isalpha(dagger[i])) {
            dagger_upper += toupper(dagger[i]);
        }
    }
    
    // Set the character's dagger type based on the input.
    if (dagger_upper == "RUNE") {
        dagger_ = RUNE;
    } else if (dagger_upper == "ADAMANT") {
        dagger_ = ADAMANT;
    } else if (dagger_upper == "MITHRIL") {
        dagger_ = MITHRIL;
    } else if (dagger_upper == "STEEL") {
        dagger_ = STEEL;
    } else if (dagger_upper == "IRON") {
        dagger_ = IRON;
    } else if (dagger_upper == "BRONZE") {
        dagger_ = BRONZE;
    } else {
        dagger_ = WOOD; // Default case for "WOOD" or any other value
    }
}

std::string Scoundrel::getDagger() const {
    // Return a string indicating the character's dagger type.
    switch (dagger_) {
        case Dagger::BRONZE:
            return "BRONZE";
        case Dagger::IRON:
            return "IRON";
        case Dagger::STEEL:
            return "STEEL";
        case Dagger::MITHRIL:
            return "MITHRIL";
        case Dagger::ADAMANT:
            return "ADAMANT";
        case Dagger::RUNE:
            return "RUNE";
        default:
            return "WOOD"; // Default case
    }
}

bool Scoundrel::setFaction(const std::string& faction) {
    std::string faction_upper = "";
    for (int i = 0; i < faction.size(); i++) {
        if (std::isalpha(faction[i])) {
            faction_upper += toupper(faction[i]);
        }
    }

    // Valid Factions: [CUTPURSE, SHADOWBLADE, SILVERTONGUE] 
    if (faction_upper != "" && (faction_upper == "CUTPURSE" ||
        faction_upper == "SHADOWBLADE" || faction_upper == "SILVERTONGUE")) {
        // Set the character's faction if it's valid.
        faction_ = faction_upper;
        return true;
    } else {
        // Invalid faction, do nothing and return false.
        return false;
    }
}

std::string Scoundrel::getFaction() const {
    // Return the string indicating the character's faction.
    return faction_;
}

void Scoundrel::setDisguise(const bool& disguise) {
    // Set the private member variable indicating whether the character has a disguise.
    has_disguise_ = disguise;
}

bool Scoundrel::hasDisguise() const {
    // Return whether the character has a disguise.
    return has_disguise_;
}