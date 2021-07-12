/*
** EPITECH PROJECT, 2021
** Rush
** File description:
** task2
*/

#include "box.hpp"

Box::Box(std::string name) : Wrap(name)
{
  this->status = OPEN;
}

Box::~Box()
{
}

void Box::wrapMeThat(Object *toy)
{
  if (toy == NULL) {
    std::cerr << "there is nothing to wrap" << std::endl;
    return;
  }
  if (this->_toy != NULL) {
    std::cerr << "there is already something in the box" << std::endl;
    return;
  }
  if (this->status != OPEN) {
    std::cerr << "The box is closed" << std::endl;
    return;
  }
  this->_toy = toy;
  this->status = CLOSE;
  std::cout << "tuuuut tuuut tuut" << std::endl;
}