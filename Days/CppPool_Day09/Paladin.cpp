/*
** EPITECH PROJECT, 2021
** CppPool Day09 ex04
** File description:
** paladin
*/

#include "Paladin.hpp"

Paladin::Paladin(const std::string &name, int level) : Character(name, level), Warrior(name, level), Priest(name, level)
{
    this->_class = "Paladin";
    this->_race = "Human";
    this->_strength = 9;
    this->_stamina = 10;
    this->_intelligence = 10;
    this->_agility = 2;
    this->_spirit = 10;
    std::cout << "the light falls on " << this->_name << std::endl;
}

Paladin::~Paladin(void) {}

int Paladin::CloseAttack(void)
{
    return (Warrior::CloseAttack());
}

int Paladin::RangeAttack(void)
{
    return (Priest::RangeAttack());
}

int Paladin::Intercept(void)
{
    return (Warrior::RangeAttack());
}

void Paladin::Heal(void)
{
    Priest::Heal();
}

void Paladin::RestorePower(void)
{
    Warrior::RestorePower();
}