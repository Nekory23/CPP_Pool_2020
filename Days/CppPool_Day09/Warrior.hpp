/*
** EPITECH PROJECT, 2021
** CppPool Day09 ex02
** File description:
** warrior
*/

#ifndef _WARRIOR_HPP_
#define _WARRIOR_HPP_

#include <iostream>
#include "Character.hpp"

class Warrior : public virtual Character {
public :
    Warrior(const std::string &name, int level, const std::string &);
    Warrior(const std::string &name, int level);
    ~Warrior();

    int CloseAttack();
    int RangeAttack();
protected :
    const std::string weaponName;
};

#endif