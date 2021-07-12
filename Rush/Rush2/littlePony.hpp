/*
** EPITECH PROJECT, 2021
** Rush
** File description:
** task1
*/

#ifndef _PONY_
#define _PONY_

#include <iostream>
#include "toy.hpp"

class LittlePony : public Toy
{
  public:
  LittlePony(const std::string &name);
  ~LittlePony();
  void isTaken() override;
};

#endif