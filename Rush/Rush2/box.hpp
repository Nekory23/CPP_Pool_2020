/*
** EPITECH PROJECT, 2021
** Rush
** File description:
** task2
*/

#ifndef _BOX_
#define _BOX_

#include "wrap.hpp"

class Box : public Wrap
{
  public:
  Box(std::string name);
  ~Box(void);
  void wrapMeThat(Object *toy) override;
};

#endif