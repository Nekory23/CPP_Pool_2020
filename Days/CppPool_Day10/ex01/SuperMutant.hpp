/*
** EPITECH PROJECT, 2021
** CppPool Day10 ex01
** File description:
** super mutant
*/

#ifndef _MUTANT_HPP_
#define _MUTANT_HPP_

#include <iostream>
#include "AEnemy.hpp"

class SuperMutant : public AEnemy {
public :
    SuperMutant(void);
    ~SuperMutant(void);

    void takeDamage(int damage) override;
};

#endif