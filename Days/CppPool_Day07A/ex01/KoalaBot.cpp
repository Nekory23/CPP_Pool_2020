/*
** EPITECH PROJECT, 2021
** CppPool Day07A ex01
** File description:
** koala bot
*/

#include "KoalaBot.hpp"

KoalaBot::KoalaBot(std::string serial)
{
    this->_serial = serial;
}

KoalaBot::~KoalaBot(void) {}

void KoalaBot::setParts(Arms &arms)
{
    this->_arms = arms;
}

void KoalaBot::setParts(Legs &legs)
{
    this->_legs = legs;
}

void KoalaBot::setParts(Head &head)
{
    this->_head = head;
}

void KoalaBot::swapParts(Arms &arms)
{
    this->_arms = arms;
}

void KoalaBot::swapParts(Legs &legs)
{
    this->_legs = legs;
}

void KoalaBot::swapParts(Head &head)
{
    this->_head = head;
}

const void KoalaBot::informations(void)
{
    std::cout << "[KoalaBot] " << this->_serial << std::endl;
    this->_arms.informations();
    this->_legs.informations();
    this->_head.informations();
}

const bool KoalaBot::status(void)
{
    if (this->_arms.isFunctional() && this->_legs.isFunctional()
        && this->_head.isFunctional())
        return (true);
    return (false);
}