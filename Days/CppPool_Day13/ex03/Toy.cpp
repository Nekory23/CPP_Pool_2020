/*
** EPITECH PROJECT, 2021
** CppPool Day13 ex00
** File description:
** toy
*/

#include "Toy.hpp"

Toy::Toy(void)
{
    std::string empty;

    this->_name = "toy";
    this->_type = BASIC_TOY;
    this->_pic = empty;
}

Toy::Toy(const Toy &copy)
{
    this->_name = copy._name;
    this->_pic.data = copy._pic.data;
    this->_type = copy.getType();
}

Toy::Toy(ToyType type, const std::string &name, const std::string &file) : _pic(file)
{
    this->_type = type;
    this->_name = name;
}

Toy &Toy::operator=(const Toy &copy)
{
    this->_name = copy._name;
    this->_pic.data = copy._pic.data;
    this->_type = copy.getType();
    return (*this);
}

Toy::~Toy(void) {}

std::string Toy::getAscii(void) const
{
    return (this->_pic.data);
}

std::string Toy::getName(void) const
{
    return (this->_name);
}

Toy::ToyType Toy::getType(void) const
{
    return (this->_type);
}

void Toy::setAscii(const std::string &filename)
{
    this->_pic.getPictureFromFile(filename);
}

void Toy::setName(const std::string &name)
{
    this->_name = name;
}

bool Toy::speak(const std::string &statement)
{
    std::cout << this->_name << " \"" << statement << "\"" << std::endl;
    return (true);
}