/*
** EPITECH PROJECT, 2021
** CppPool Day10 ex01
** File description:
** power fist
*/

#ifndef _POWERFIST_HPP_
#define _POWERFIST_HPP_

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
public :
    PowerFist(void);
    ~PowerFist(void);

    void attack(void) const;
};

#endif