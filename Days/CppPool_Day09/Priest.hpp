/*
** EPITECH PROJECT, 2021
** CppPool Day09 ex03
** File description:
** priest.hpp
*/

#ifndef _PRIEST_HPP_
#define _PRIEST_HPP_

#include "Character.hpp"
#include "Mage.hpp"

class Priest : public Mage {
public :
    Priest(const std::string &name, int level);
    ~Priest(void);

    int CloseAttack(void);
    void Heal(void);
};

#endif