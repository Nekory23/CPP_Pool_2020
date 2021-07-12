/*
** EPITECH PROJECT, 2021
** Rush
** File description:
** task1
*/

#ifndef _TEDDY_
#define _TEDDY_

#include <iostream>
#include "toy.hpp"

class Teddy : public Toy {
  public :
    Teddy(const std::string &_name);
    ~Teddy(void);
    void isTaken(void) override;
};

#endif