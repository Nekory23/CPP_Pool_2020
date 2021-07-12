/*
** EPITECH PROJECT, 2021
** CppPool Day10 ex01
** File description:
** plasma rifle
*/

#ifndef _PLASMA_HPP_
#define _PLASMA_HPP_

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
public :
    PlasmaRifle();
    ~PlasmaRifle(void);

    void attack(void) const;
};

#endif