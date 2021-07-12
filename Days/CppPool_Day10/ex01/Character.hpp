/*
** EPITECH PROJECT, 2021
** CppPool Day10 ex01
** File description:
** character
*/

#ifndef _CHARACTER_HPP_
#define _CHARACTER_HPP_

#include <iostream>
#include "AWeapon.hpp"
#include "AEnemy.hpp"

class Character {
public :
    Character(const std::string &name);
    Character();
    ~Character(void);

    void recoverAP(void);
    void equip(AWeapon *weapon);
    void attack(AEnemy *enemy);
    std::string const &getName(void) const;
    int getAPPoints(void) const;
    AWeapon *getWeapon(void) const;
private :
    std::string _name;
    int _APpoints;
    AWeapon *_equiped_weapon;
};

std::ostream &operator<<(std::ostream &, const Character &);

#endif