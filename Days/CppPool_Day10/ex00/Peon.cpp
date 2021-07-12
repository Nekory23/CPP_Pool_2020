/*
** EPITECH PROJECT, 2021
** CppPool Day10 ex00
** File description:
** peon
*/

#include "Peon.hpp"

Peon::Peon(const std::string name) : Victim(name) 
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed(void) const
{
    std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}