/*
** EPITECH PROJECT, 2021
** CppPool Day09 ex04
** File description:
** paladin
*/

#ifndef _PALADIN_HPP_
#define _PALADIN_HPP_

#include "Warrior.hpp"
#include "Priest.hpp"

class Paladin : public Warrior, public Priest {
public :
    Paladin(const std::string &name, int level);
    ~Paladin();

    int CloseAttack();
    int RangeAttack();
    int Intercept();

    void Heal();
    void RestorePower();
};

#endif
