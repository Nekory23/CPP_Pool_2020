/*
** EPITECH PROJECT, 2021
** Rush
** File description:
** task1
*/

#ifndef _TOY_
#define _TOY_

#include <iostream>
#include "object.hpp"

class Toy : public Object {
  public:
    Toy(const std::string &name);
    ~Toy();
    virtual void isTaken(void) = 0;
};

#endif