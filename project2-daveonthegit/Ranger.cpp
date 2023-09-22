/*
CSCI235 Summer 2023
Project 2 - Classes
David Xiao
9/19/23
Ranger.cpp implements the Ranger class along with its private and public members
*/
#include "Ranger.hpp"

Ranger::Ranger() : Character(), has_companion_{ false } {
    // Default constructor initializes private members.
}

Ranger::Ranger(const std::string& name, const std::string& race, int vitality, int armor, int level, bool enemy, 
std::vector<Arrows> arrows,std::vector<std::string> affinities,bool companion)
    : Character(name, race, vitality, armor, level, enemy) {
    // Parameterized constructor initializes private members based on input parameters.

    // Loop through the provided arrows and add them to the character's arrow inventory.
    for (auto arrow : arrows) {
        addArrows(arrow.type_, arrow.quantity_);
    }

    // Loop through the provided affinities and add them to the character's affinity list.
    for (auto affinity : affinities) {
        addAffinity(affinity);
    }

    // Set whether the character has an animal companion.
    has_companion_ = companion;
}

std::vector<Arrows> Ranger::getArrows() const {
    // Return the vector of arrows associated with the character.
    return arrows_;
}

bool Ranger::addArrows(const std::string& arrow_type, const int& quantity) {
    if (quantity < 1) {
        // Check if the quantity is non-positive; if so, return false.
        return false;
    }
    
    std::string arrow_type_upper = "";
    for (int i = 0; i < arrow_type.size(); i++) {
        if (std::isalpha(arrow_type[i])) {
            arrow_type_upper += toupper(arrow_type[i]);
        }
    }

    // Valid arrow types are: [WOOD, FIRE, WATER, POISON, BLOOD]
    if (arrow_type_upper != "" && (arrow_type_upper == "WOOD" || arrow_type_upper == "FIRE" ||
        arrow_type_upper == "WATER" || arrow_type_upper == "POISON" || arrow_type_upper == "BLOOD")) {
        // Check if the character already has arrows of this type.
        for (auto& arrow : arrows_) {
            if (arrow.type_ == arrow_type_upper) {
                // If the arrow type matches, increment the quantity and return true.
                arrow.quantity_ += quantity;
                return true;
            }
        }
        
        // If the character doesn't have arrows of this type, create a new arrow and add it.
        Arrows new_arrow;
        new_arrow.type_ = arrow_type_upper;
        new_arrow.quantity_ = quantity;
        arrows_.push_back(new_arrow);
        return true;
    } else {
        // Invalid arrow type or quantity, return false.
        return false;
    }
}

bool Ranger::fireArrow(const std::string& arrow_type) {
    std::string arrow_type_upper = "";
    for (int i = 0; i < arrow_type.size(); i++) {
        if (std::isalpha(arrow_type[i])) {
            arrow_type_upper += toupper(arrow_type[i]);
        }
    }

    // Search for the arrow with the given type.
    for (auto& arrow : arrows_) {
        if (arrow.type_ == arrow_type_upper && arrow.quantity_ > 0) {
            // If the arrow type matches and there are arrows left, decrement the quantity and return true.
            arrow.quantity_--;
            return true;
        }
    }

    // If the arrow wasn't found or there are no more of that type, return false.
    return false;
}

bool Ranger::addAffinity(const std::string& arrow_affinity) {
    std::string affinity_upper = "";
    for (int i = 0; i < arrow_affinity.size(); i++) {
        if (std::isalpha(arrow_affinity[i])) {
            affinity_upper += toupper(arrow_affinity[i]);
        }
    }

    // Valid Affinities: [FIRE, WATER, POISON, BLOOD]
    if (affinity_upper != "" && (affinity_upper == "FIRE" || affinity_upper == "WATER" ||
        affinity_upper == "POISON" || affinity_upper == "BLOOD")) {
        // Check if the affinity already exists in the vector.
        for (const std::string& existing_affinity : affinities_) {
            if (existing_affinity == affinity_upper) {
                // Affinity already exists, return false.
                return false;
            }
        }
        
        // Affinity is valid and not a duplicate, add it to the vector.
        affinities_.push_back(affinity_upper);
        return true;
    } else {
        // Invalid affinity, return false.
        return false;
    }
}

std::vector<std::string> Ranger::getAffinities() const {
    // Return the vector of affinities associated with the character.
    return affinities_;
}

void Ranger::setCompanion(const bool& companion) {
    // Set whether the character has an animal companion.
    has_companion_ = companion;
}

bool Ranger::getCompanion() const {
    // Return whether the character has an animal companion.
    return has_companion_;
}