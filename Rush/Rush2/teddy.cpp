/*
** EPITECH PROJECT, 2021
** Rush
** File description:
** task1
*/

#include "teddy.hpp"

Teddy::Teddy(const std::string &_name) : Toy(_name) {}

Teddy::~Teddy(void) {}

void Teddy::isTaken(void)
{
  std::cout << "gra hu" << std::endl;
}