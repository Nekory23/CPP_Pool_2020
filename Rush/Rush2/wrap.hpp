/*
** EPITECH PROJECT, 2021
** Rush
** File description:
** task2
*/

#ifndef _WRAP_
#define _WRAP_

#include <iostream>
#include <string>
#include "object.hpp"

class Wrap : public Object
{
  public:
    enum box_status {
      OPEN,
      CLOSE
    };
    Wrap(std::string name);
    ~Wrap();
    virtual void wrapMeThat(Object *toy);
    virtual void openMe(void);
    virtual void closeMe(void);
    virtual box_status getStatus(void);
    protected:
    Object *_toy;
    box_status status;
};

#endif