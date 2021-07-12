/*
** EPITECH PROJECT, 2021
** CppPool Day10 ex01
** File description:
** plasma rifle
*/

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::~PlasmaRifle(void) {}

void PlasmaRifle::attack(void) const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}