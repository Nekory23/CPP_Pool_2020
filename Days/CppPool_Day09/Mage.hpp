/*
** EPITECH PROJECT, 2021
** CppPool Day09 ex03
** File description:
** Mage.hpp
*/

#ifndef _MAGE_HPP_
#define _MAGE_HPP_

#include <iostream>
#include "Character.hpp"

class Mage : public virtual Character {
public :
    Mage(const std::string &name, int level);
    ~Mage(void);

    int CloseAttack(void);
    int RangeAttack(void);
    void RestorePower(void);
};

#endif
