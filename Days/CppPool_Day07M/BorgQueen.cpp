/*
** EPITECH PROJECT, 2021
** CppPool Day07M
** File description:
** Borg queen
*/

#include "BorgQueen.hpp"

Borg::BorgQueen::BorgQueen(void)
{
    this->destroyPtr = &Borg::Ship::fire;
    this->firePtr = &Borg::Ship::fire;
    this->movePtr = &Borg::Ship::move;
}

void Borg::BorgQueen::fire(Borg::Ship *ship, Federation::Starfleet::Ship *target)
{
    (ship->*firePtr)(target);
}

bool Borg::BorgQueen::move(Borg::Ship *ship, Destination dest)
{
    return ((ship->*movePtr)(dest));
}

void Borg::BorgQueen::destroy(Borg::Ship *ship, Federation::Ship *target)
{
    (ship->*destroyPtr)(target);
}