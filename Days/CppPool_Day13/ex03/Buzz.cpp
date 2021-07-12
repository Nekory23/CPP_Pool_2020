/*
** EPITECH PROJECT, 2021
** CppPool Day13 ex02
** File description:
** buzz
*/

#include "Buzz.hpp"

Buzz::Buzz(const std::string &name, const std::string &file) : Toy(Toy::ToyType::BUZZ, name, file) {}

Buzz::~Buzz(void) {}

bool Buzz::speak(const std::string &statement)
{
    std::cout << "BUZZ: " << this->_name << " \"" << statement << "\"" << std::endl;
    return (true);
}