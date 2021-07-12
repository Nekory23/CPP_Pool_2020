/*
** EPITECH PROJECT, 2021
** Rush
** File description:
** task2
*/

#include "wrap.hpp"
#include "box.hpp"
#include "giftPaper.hpp"

Wrap::Wrap(std::string name) : Object(name)
{
  this->_toy = NULL;
}

Wrap::~Wrap(void)
{
}

void Wrap::openMe()
{
  this->status = OPEN;
}

void Wrap::closeMe()
{
  this->status = CLOSE;
}

Wrap::box_status Wrap::getStatus()
{
  return (this->status);
}

void Wrap::wrapMeThat(Object *toy)
{
  if (toy == NULL) {
    std::cerr << "There is nothing to wrap" << std::endl;
    return;
  }
  if (this->_toy != NULL) {
    std::cerr << "There is already something in the gift paper" << std::endl;
    return;
  }
  this->_toy = toy;
  this->closeMe();
  std::cout << "tuuuut tuuut tuut" << std::endl;
}