/*
CSCI235 Summer 2023
Project 2 - Classes
David Xiao
9/19/23
Barbarian.hpp declares the Barbarian class along with its private and public members
*/
#ifndef BARBARIAN_HPP_
#define BARBARIAN_HPP_
#include "Character.hpp"
#include <string>
#include <cctype>
class Barbarian: public Character{
public:
/**
    Default constructor.
    Default-initializes all private members. Default character name: "NAMELESS". 
    Booleans are default-initialized to False. 
    Default weapons: "NONE". 
*/
Barbarian();

/**
    Parameterized constructor.
    @param      : The name of the character (a const string reference)
    @param      : The race of the character (a const string reference)
    @param      : The character's vitality (an integer). Default to 0
    @param      : The character's max armor level (an integer). Default to 0
    @param      : The character's level (an integer). Default to 0
    @param      : A flag indicating whether the character is an enemy. Default to false
    @param      : The character's main weapon (a const string reference). 
                  String inputs can be in lowercase, but must be converted to uppercase 
                  when setting the variable. Only alphabetical characters are allowed.
                  Default to "NONE"
    @param      : The character's offhand weapon (a const string reference). 
                  String inputs can be in lowercase, but must be converted to uppercase 
                  when setting the variable. Only alphabetical characters are allowed.
                  Default to "NONE"
    @param      : A flag indicating whether the character is enraged. Default to false
    @post       : The private members are set to the values of the corresponding parameters. 
                : If the main and secondary weapons are not provided or invalid, the variables                    are set to "NONE".
*/
Barbarian(const std::string& name, const std::string& race, int vitality =0, int armor= 0, int level=0, bool enemy = false, 
const std::string& main_weapon ="NONE", const std::string& secondary_weapon ="NONE", bool enraged =false
);

/**
    @param    : a reference to a string representing the Character's main weapon
    @post     : sets the private member variable to the value of the parameter. 
                Only alphabetical characters are allowed.
                String inputs can be in lowercase, but must be converted to uppercase when 
                setting the variable.
                If the given input is invalid (i.e contains numbers), do nothing and return false
    @return   : true if setting the variable was successful, false otherwise.
**/
bool setMainWeapon(const std::string& main_weapon);


/**
    @return   : a string of the Character's main weapon
**/
std::string getMainWeapon() const;

/**
    @param    : a reference to a string representing the Character's secondary weapon
    @post     : sets the private member variable to the value of the parameter. 
                Only alphabetical characters are allowed.
                String inputs can be in lowercase, but must be converted to uppercase when 
                setting the variable.
              : If the given input is invalid (i.e contains numbers), do nothing and return false
    @return   : true if setting the variable was successful, false otherwise.
**/
bool setSecondaryWeapon(const std::string& secondary_weapon);


/**
   @return    : a string of the Character's secondary weapon
**/
std::string getSecondaryWeapon() const;

/**
  @param      : a reference to a bool
  @post       : sets the private member variable to the value of the parameter.
**/
void setEnrage(const bool& enraged);


/**
  @return  : a boolean of whether the Character is enraged
**/
bool getEnrage() const;

/**
  @post   : sets the enraged variable to the opposite of what it was
**/
void toggleEnrage();
private:
    std::string main_weapon_;
    std::string secondary_weapon_;
    bool enraged_;
};

#endif