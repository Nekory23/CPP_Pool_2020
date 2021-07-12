/*
** EPITECH PROJECT, 2021
** CppPool Day09 ex05
** File description:
** hunter
*/

#ifndef _HUNTER_HPP_
#define _HUNTER_HPP_

#include "Warrior.hpp"

class Hunter : protected Warrior {
public :
    Hunter(const std::string &name, int level);
    ~Hunter(void);

    int CloseAttack(void);
    int RangeAttack(void);
    void RestorePower(void);
    void Heal(void);

    const std::string &getName(void) const;
    int getLvl(void) const;
    int getPv(void) const;
    int getPower() const;
};

#endif
