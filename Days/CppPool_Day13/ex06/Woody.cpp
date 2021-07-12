/*
** EPITECH PROJECT, 2021
** CppPool Day13 ex02
** File description:
** woody
*/

#include "Woody.hpp"

Woody::Woody(const std::string &name, const std::string &file) : Toy(Toy::ToyType::WOODY, name, file) {}

Woody::~Woody(void) {}

bool Woody::speak(const std::string &statement)
{
    std::cout << "WOODY: " << this->_name << " \"" << statement << "\"" << std::endl;
    return (true);
}

bool Woody::speak_es(const std::string &statement)
{
    (void)statement;
    this->error.type = Error::SPEAK;
    return (false);
}