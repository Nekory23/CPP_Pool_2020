/*
** EPITECH PROJECT, 2021
** CppPool Day10 ex01
** File description:
** power fist
*/

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) {}

PowerFist::~PowerFist(void) {}

void PowerFist::attack(void) const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}