/*
** EPITECH PROJECT, 2021
** CppPool Day14M ex00
** File description:
** fruits
*/

#include "Fruit.hpp"

Fruit::Fruit(const std::string &name, int vitamins) : _name(name), _vitamins(vitamins) {}

Fruit &Fruit::operator=(const Fruit &copy)
{
    this->_vitamins = copy.getVitamins();
    this->_name = copy.getName();
    return (*this);
}

std::string Fruit::getName(void) const
{
    return (this->_name);
}

int Fruit::getVitamins(void) const
{
    return (this->_vitamins);
}

Fruit::~Fruit(void) {}

std::ostream &operator<<(std::ostream &stream, const Fruit &f)
{
    stream << f.getName() << std::endl;
    return (stream);
}