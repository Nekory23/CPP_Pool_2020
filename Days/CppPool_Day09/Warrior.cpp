/*
** EPITECH PROJECT, 2021
** CppPool Day09 ex02
** File description:
** warrior
*/

#include "Warrior.hpp"

Warrior::Warrior(const std::string &name, int level, const std::string &weapon) : Character(name, level), weaponName(weapon)
{
    this->_class = "Warrior";
    this->_race = "Dwarf";
    this->_strength = 12;
    this->_stamina = 12;
    this->_intelligence = 6;
    this->_spirit = 5;
    this->_agility = 7;
    std::cout << "I'm " << this->_name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::Warrior(const std::string &name, int level) : Character(name, level), weaponName("hammer")
{
    this->_class = "Warrior";
    this->_race = "Dwarf";
    this->_strength = 12;
    this->_stamina = 12;
    this->_intelligence = 6;
    this->_spirit = 5;
    this->_agility = 7;
    std::cout << "I'm " << this->_name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior(void) {}

int Warrior::CloseAttack(void)
{
    int damage = 0;

    if (this->Range == CLOSE && this->_power >= 30) {
        this->_power -= 30;
        damage = this->_strength + 20;
        std::cout << this->_name << " strikes with his " << this->weaponName << std::endl;
    }
    return (damage);
}

int Warrior::RangeAttack(void)
{
    if (this->Range == RANGE && this->_power >= 10) {
        this->_power -= 10;
        this->Range = CLOSE;
        std::cout << this->_name << " intercepts" << std::endl;
    }
    return (0);
}