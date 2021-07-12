/*
** EPITECH PROJECT, 2021
** CppPool Day10 ex01
** File description:
** weapon
*/

#ifndef _AWEAPON_HPP_
#define _AWEAPON_HPP_

#include <iostream>

class AWeapon {
public :
    AWeapon(const std::string &, int, int);
    virtual ~AWeapon(void);

    std::string const &getName(void) const;
    int getAPCost(void) const;
    int getDamage(void) const;
    virtual void attack(void) const = 0;
private :
    const std::string _name;
    int _apcost;
    int _damage;
};

#endif