/*
** EPITECH PROJECT, 2021
** Rush
** File description:
** task1
*/

#include "littlePony.hpp"

LittlePony::LittlePony(const std::string &name) : Toy(name) {}

LittlePony::~LittlePony() {}

void LittlePony::isTaken()
{
  std::cout << "yo man"<< std::endl;
}