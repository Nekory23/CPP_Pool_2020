/*
** EPITECH PROJECT, 2021
** CppPool Day09 ex01
** File description:
** character.cpp
*/

#include "Character.hpp"

Character::Character(const std::string &name, int level) : _name(name)
{
    this->_level = level;
    this->_power = 100;
    this->_pv = 100;
    this->_strength = 5;
    this->_stamina = 5;
    this->_intelligence = 5;
    this->_spirit = 5;
    this->_agility = 5;
    this->Range = CLOSE;
    this->_class = "Character";
    this->_race = "Human";
    std::cout << this->_name << " Created" << std::endl;
}

Character::~Character(void) {}

const std::string &Character::getName(void) const
{
    return (this->_name);
}

int Character::getLvl(void) const
{
    return (this->_level);
}

int Character::getPv(void) const
{
    return (this->_pv);
}

int Character::getPower(void) const
{
    return (this->_power);
}

void Character::setPower(int power)
{
    if (power >= 100)
        this->_power = 100;
    else
        this->_power = power;    
}

int Character::CloseAttack(void)
{
    int damage = 0;

    if (this->Range == CLOSE && this->_power >= 10) {
        this->_power -= 10;
        damage = this->_strength + 10;
        std::cout << this->_name << " strikes with a wooden stick" << std::endl;
    }
    return (damage);
}

int Character::RangeAttack(void)
{
    int damage = 0;

    if (this->Range == RANGE && this->_power >= 10) {
        this->_power -= 10;
        damage = this->_strength + 5;
        std::cout << this->_name << " tosses a stone" << std::endl;
    }
    return (damage);
}

void Character::Heal(void)
{
    if (this->_pv + 50 >= 100)
        this->_pv = 100;
    else
        this->_pv += 50;
    std::cout << this->_name << " takes a potion" << std::endl;
}

void Character::RestorePower(void)
{
    if (this->_power + 100 >= 100)
        this->_power = 100;
    else
        this->_power += 100;
    std::cout << this->_name << " eats" << std::endl;
}

void Character::TakeDamage(int damage)
{
    if (this->_pv - damage > 0) {
        std::cout << this->_name << " takes " << damage << " damage" << std::endl;
        this->_pv -= damage;
    } else {
        this->_pv -= damage;
        std::cout << this->_name << " out of combat" << std::endl;
    }
}