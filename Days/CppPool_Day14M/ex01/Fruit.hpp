/*
** EPITECH PROJECT, 2021
** CppPool Day14M ex00
** File description:
** fruits
*/

#ifndef _FRUITS_
#define _FRUITS_

#include <iostream>

class Fruit {
public :
    Fruit(const std::string &, int);
    Fruit &operator=(const Fruit &);
    ~Fruit();

    std::string getName(void) const;
    int getVitamins(void) const;
protected :
    std::string _name;
    int _vitamins;
};

std::ostream &operator<<(std::ostream &, const Fruit &);

#endif