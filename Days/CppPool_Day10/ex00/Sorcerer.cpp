/*
** EPITECH PROJECT, 2021
** CppPool Day10 ex00
** File description:
** sorcerer
*/

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string name, const std::string title) :  _name(name), _title(title)
{
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(void) 
{
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::getName(void) const
{
    return (this->_name);
}

std::string Sorcerer::getTitle(void) const
{
    return (this->_title);
}

void Sorcerer::polymorph(const Victim &v) const
{
    v.getPolymorphed();
}

void Sorcerer::polymorph(const Peon &p) const
{
    p.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, const Sorcerer &s)
{
    out << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies!" << std::endl;
    return (out);
}