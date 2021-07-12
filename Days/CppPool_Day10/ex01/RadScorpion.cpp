/*
** EPITECH PROJECT, 2021
** CppPool Day10 ex01
** File description:
** rad scorpion
*/

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : AEnemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
    std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int damage)
{
    AEnemy::takeDamage(damage);
}