/*
** EPITECH PROJECT, 2021
** CppPool Day10 ex01
** File description:
** weapon
*/

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int ap, int dmg) : _name(name)
{
    this->_apcost = ap;
    this->_damage = dmg;
}

AWeapon::~AWeapon(void) {}

std::string const &AWeapon::getName(void) const
{
    return (this->_name);
}

int AWeapon::getAPCost(void) const
{
    return (this->_apcost);
}

int AWeapon::getDamage(void) const
{
    return (this->_damage);
}