/*
** EPITECH PROJECT, 2021
** Rush
** File description:
** task1
*/

#ifndef _OBJECT_
#define _OBJECT_

#include <iostream>
#include <string>

class Object {
  public:
    Object(const std::string &name);
    ~Object();
    const std::string &getName(void) const;
  private:
    const std::string _name;
};

std::ostream &operator<<(std::ostream &stream, const Object &obj);

#endif