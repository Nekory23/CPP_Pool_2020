/*
** EPITECH PROJECT, 2021
** CppPool Day10 ex00
** File description:
** victim
*/

#include "Victim.hpp"

Victim::Victim(const std::string name) : _name(name)
{
    std::cout << "Some random victim called " << this->_name << " just popped!" << std::endl;
}

Victim::~Victim(void)
{
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::getName(void) const
{
    return (this->_name);
}

void Victim::getPolymorphed(void) const
{
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &stream, const Victim &v)
{
    stream << "I'm " << v.getName() << " and I like otters!" << std::endl;
    return (stream);
}