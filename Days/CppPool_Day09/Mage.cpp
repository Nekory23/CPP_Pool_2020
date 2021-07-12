/*
** EPITECH PROJECT, 2021
** CppPool Day09 ex03
** File description:
** mage.cpp
*/

#include "Mage.hpp"

Mage::Mage(const std::string &name, int level) : Character(name, level)
{
    this->_class = "Mage";
    this->_race = "Gnome";
    this->_strength = 6;
    this->_stamina = 6;
    this->_intelligence = 12;
    this->_spirit = 11;
    this->_agility = 7;
    std::cout << this->_name << " teleported" << std::endl;
}

Mage::~Mage(void) {}

int Mage::CloseAttack(void)
{
    if (this->Range == CLOSE && this->_power >= 10) {
        this->_power -= 10;
        this->Range = RANGE;
        std::cout << this->_name << " blinks" << std::endl;
    }
    return (0);
}

int Mage::RangeAttack(void)
{
    int damage = 0;

    if (this->_power >= 25) {
        this->_power -= 25;
        damage = this->_spirit + 20;
        std::cout << this->_name << " launches a fire ball" << std::endl;
    }
    return (damage);
}

void Mage::RestorePower(void)
{
    if (this->_power + (50 + this->_intelligence) >= 100)
        this->_power = 100;
    else
        this->_power += (50 + this->_intelligence);
    std::cout << this->_name << " takes a mana potion" << std::endl;
}