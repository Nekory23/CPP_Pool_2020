/*
** EPITECH PROJECT, 2021
** CppPool Day09 ex01
** File description:
** character.hpp
*/

#ifndef _CHARACTER_HPP_
#define _CHARACTER_HPP_

#include <iostream>

class Character {
public :
    Character(const std::string &, int);
    ~Character(void);

    const std::string &getName(void) const;
    int getLvl(void) const;
    int getPv(void) const;
    int getPower() const;

    void setPv(int);
    void setPower(int);

    typedef enum AttackRange {
    CLOSE,
    RANGE
    } AttackRange;

    AttackRange Range;
    int CloseAttack();
    int RangeAttack();
    void Heal();
    void RestorePower();

    void TakeDamage(int);
protected :
    const std::string _name;
    int _level;

    int _pv;
    int _power;
    int _strength;
    int _stamina;
    int _intelligence;
    int _spirit;
    int _agility;

    std::string _class;
    std::string _race;
};

#endif
