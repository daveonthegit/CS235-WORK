/*
CSCI235 Summer 2023
Project 2 - Classes
David Xiao
9/19/23
Mage.hpp declares the Mage class along with its private and public members
*/
#ifndef MAGE_HPP_
#define MAGE_HPP_
#include "Character.hpp"
#include <string>
#include <cctype>
class Mage: public Character{
public:
        /**
     Default constructor.
    Default-initializes all private members. 
    Default character name: "NAMELESS". Booleans are default-initialized to False. 
    Default school of magic and weapon: "NONE". 
    */
   Mage();

    /**
     Parameterized constructor.
    @param      : The name of the character (a const string reference)
    @param      : The race of the character (a const string reference)
    @param      : The character's vitality (an integer). Default to 0
    @param      : The character's max armor level (an integer). Default to 0
    @param      : The character's level (an integer). Default to 0
    @param      : A flag indicating whether the character is an enemy. Default to false.
    @param      : The character's school of magic (a const string reference). Valid schools: 
                    [ELEMENTAL, NECROMANCY, ILLUSION]. 
                    String inputs can be in lowercase, but must be converted to 
                    uppercase when setting the variable. Default to "NONE".
    @param      : The character's choice of weapon (a const string reference). 
                    Valid weapons: [WAND, STAFF]
                    String inputs can be in lowercase, but must be converted to 
                    uppercase when setting the variable. Default to "NONE".
    @param      : A flag indicating whether the character is able to summon an 
                    incarnate. Default to false.
    @post       : The private members are set to the values of the corresponding 
                    parameters.
                    REMEMBER: If the school of magic or weapon is not provided or invalid, the 
                    variables should be set to "NONE". 
    */
   Mage(const std::string& name, const std::string& race, int vitality =0, int armor= 0, int level=0, bool enemy = false, 
         const std::string& school_of_magic ="NONE", const std::string& weapon ="NONE", bool can_summon_incarnate = false);
    /**
        @param  : a reference to a string representing the school of magic
        @post   : sets the private member variable to the value of the parameter. If 
                the provided school of magic is not one of the following: [ELEMENTAL, 
                NECROMANCY, ILLUSION], do nothing and return false.
                String inputs can be in lowercase, but must be converted to 
                uppercase when setting the variable.
        @return  : true if setting the variable was successful, false otherwise.
    **/
    bool setSchool(const std::string& school);


    /**
     @return  : the string indicating the character's school of magic
    **/
    std::string getSchool()const;


    /**
        @param  : a reference to a string representing the character's weapon
        @post   : sets the private member variable to the value of the parameter.
                String inputs can be in lowercase, but must be converted to 
                uppercase when setting the variable.
                If the provided weapon is not one of the following: 
                [WAND, STAFF], do nothing and return false.
        @return  : true if setting the variable was successful, false otherwise.
    **/
    bool setCastingWeapon(const std::string& weapon);


    /**
     @return  : the string indicating the character's weapon
    **/
    std::string getCastingWeapon() const;

    /**
     @param  : a reference to boolean
    @post   : sets the private member variable indicating whether the character can 
                summon an incarnate
    **/
    void setIncarnateSummon(const bool& incarnate);


    /**
     @return  : the summon-incarnate flag
    **/
    bool hasIncarnateSummon() const;
private:
    std::string school_of_magic_;
    std::string weapon_;
    bool can_summon_incarnate_;
};
#endif