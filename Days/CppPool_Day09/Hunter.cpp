/*
** EPITECH PROJECT, 2021
** CppPool Day09 ex05
** File description:
** hunter
*/

#include "Hunter.hpp"

Hunter::Hunter(const std::string &name, int level) : Character(name, level), Warrior(name, level, "sword")
{
    this->_class = "Hunter";
    this->_race = "Elf";
    this->_strength = 9;
    this->_stamina = 9;
    this->_intelligence = 5;
    this->_spirit = 6;
    this->_agility = 25;
    std::cout << this->_name << " is born from a tree" << std::endl;
}

Hunter::~Hunter(void) {}

int Hunter::CloseAttack(void)
{
    return (Warrior::CloseAttack());
}

int Hunter::RangeAttack(void)
{
    int damage = 0;

    if (this->_power >= 25) {
        this->_power -= 25;
        damage = this->_agility + 20;
        std::cout << this->_name << " uses his bow" << std::endl;
        return (damage);
    }
    return (damage);
}

void Hunter::RestorePower(void)
{
    this->_power = 100;
    std::cout << this->_name << " meditates" << std::endl;
}

void Hunter::Heal(void)
{
    Warrior::Heal();
}

const std::string &Hunter::getName(void) const
{
    return (Warrior::getName());
}

int Hunter::getLvl(void) const
{
    return (Warrior::getLvl());
}

int Hunter::getPv(void) const
{
    return (Warrior::getPv());
}

int Hunter::getPower(void) const
{
    return (Warrior::getPower());
}