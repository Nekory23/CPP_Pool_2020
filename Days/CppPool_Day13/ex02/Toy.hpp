/*
** EPITECH PROJECT, 2021
** CppPool Day13 ex00
** File description:
** toy
*/

#ifndef _TOY_
#define _TOY_

#include <iostream>
#include "Picture.hpp"

class Toy {
public :
    enum ToyType {
        BASIC_TOY,
        ALIEN,
        BUZZ,
        WOODY
    };
    Toy();
    Toy(const Toy &copy);
    Toy(ToyType, const std::string &, const std::string &);
    ~Toy();
    Toy &operator=(const Toy &copy);
    ToyType getType(void) const;
    std::string getName(void) const;
    std::string getAscii(void) const;
    void setName(const std::string &);
    void setAscii(const std::string &);
protected :
    ToyType _type;
    std::string _name;
    Picture _pic;
};

#endif