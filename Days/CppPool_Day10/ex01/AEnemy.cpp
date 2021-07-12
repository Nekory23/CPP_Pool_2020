/*
** EPITECH PROJECT, 2021
** CppPool Day10 ex01
** File description:
** enemy
*/

#include "AEnemy.hpp"

AEnemy::AEnemy(int hp, const std::string &type) : _type(type)
{
    this->_hp = hp;
}

AEnemy::~AEnemy(void) {}

int AEnemy::getHP(void) const
{
    return (this->_hp);
}

std::string const &AEnemy::getType(void) const
{
    return (this->_type);
}

void AEnemy::takeDamage(int damage)
{
    if (damage > 0)
        this->_hp -= damage;
}