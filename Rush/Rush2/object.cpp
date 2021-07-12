/*
** EPITECH PROJECT, 2021
** Rush
** File description:
** task1
*/

#include "object.hpp"
#include "toy.hpp"

Object::Object(const std::string &name) : _name(name) {}

Object::~Object(void) {}

const std::string &Object::getName(void) const
{
  return (this->_name);
}

std::ostream &operator<<(std::ostream &stream, const Object &obj)
{
  stream << "Object name : " << obj.getName();
  return (stream);
}