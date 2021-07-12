/*
** EPITECH PROJECT, 2021
** CppPool Day07M ex04
** File description:
** admiral
*/

#include "Admiral.hpp"

Federation::Starfleet::Admiral::Admiral(std::string name)
{
    this->_name = name;
    this->movePtr = &Federation::Starfleet::Ship::move;
    this->firePtr = &Federation::Starfleet::Ship::fire;
    std::cout << "Admiral " << this->_name << " ready for action." << std::endl;
}

Federation::Starfleet::Admiral::~Admiral(void)
{
}

void Federation::Starfleet::Admiral::fire(Federation::Starfleet::Ship *ship, Borg::Ship *target)
{
    std::cout << "On order from Admiral " << this->_name << ":" << std::endl;
    (ship->*firePtr)(target);
}

bool Federation::Starfleet::Admiral::move(Federation::Starfleet::Ship *ship, Destination dest)
{
    return ((ship->*movePtr)(dest));
}