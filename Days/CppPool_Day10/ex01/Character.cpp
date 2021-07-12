/*
** EPITECH PROJECT, 2021
** CppPool Day10 ex01
** File description:
** character
*/

#include "Character.hpp"

Character::Character(const std::string &name) :_name(name)
{
    this->_APpoints = 40;
    this->_equiped_weapon = NULL;
}

Character::~Character(void) {}

void Character::recoverAP(void)
{
    if (this->_APpoints + 10 >= 40)
        this->_APpoints = 40;
    else
        this->_APpoints += 10;
}

void Character::equip(AWeapon *weapon)
{
    this->_equiped_weapon = weapon;
}

std::string const &Character::getName(void) const
{
    return (this->_name);
}

int Character::getAPPoints(void) const
{
    return (this->_APpoints);
}

AWeapon *Character::getWeapon(void) const
{
    return (this->_equiped_weapon);
}

void Character::attack(AEnemy *target)
{
    if (this->_equiped_weapon) {
        if (this->_APpoints >= this->_equiped_weapon->getAPCost()) {
            this->_APpoints -= this->_equiped_weapon->getAPCost();
            std::cout << this->_name << " attacks " << target->getType();
            std::cout << " with a " << this->_equiped_weapon->getName() << std::endl;
             this->_equiped_weapon->attack();
            target->takeDamage(this->_equiped_weapon->getDamage());
            if (target->getHP() <= 0)
                target->~AEnemy();
        }
    }
}

std::ostream &operator<<(std::ostream &stream, const Character &c)
{
    if (c.getWeapon())
        stream << c.getName() << " has " << c.getAPPoints() << " AP and wields a " << c.getWeapon()->getName() << std::endl;
    else
        stream << c.getName() << " has " << c.getAPPoints() << " AP and is unarmed" << std::endl;
    return (stream);
}