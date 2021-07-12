/*
** EPITECH PROJECT, 2021
** CppPool Day10 ex01
** File description:
** enemy
*/

#ifndef _AENEMY_HPP_
#define _AENEMY_HPP_

#include <iostream>

class AEnemy {
public :
    AEnemy(int hp, const std::string &type);
    virtual ~AEnemy(void);

    virtual void takeDamage(int damage);

    std::string const &getType(void) const;
    int getHP(void) const;
private :
    int _hp;
    const std::string _type;
};

#endif
