/*
** EPITECH PROJECT, 2021
** CppPool Day10 ex01
** File description:
** rad scorpion
*/

#ifndef _SCORPION_HPP_
#define _SCORPION_HPP_

#include "AEnemy.hpp"

class RadScorpion : public AEnemy {
public :
    RadScorpion(void);
    ~RadScorpion(void);

    void takeDamage(int damage);
};

#endif