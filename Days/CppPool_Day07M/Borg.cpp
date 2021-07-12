/*
** EPITECH PROJECT, 2021
** CppPool Day07M ex01
** File description:
** borg
*/

#include "Borg.hpp"

Borg::Ship::Ship(int weapon_freq, short repair)
{
    this->_side = 300;
    this->_maxWarp = 9;
    this->_home = UNICOMPLEX;
    this->_location = this->_home;
    this->_shield = 100;
    this->_weaponFrequency = weapon_freq;
    this->_repair = repair;
    std::cout << "We are the Borgs. Lower your shields and surrender yourselves";
    std::cout << " unconditionally." << std::endl;
    std::cout << "Your biological characteristics and technologies";
    std::cout << " will be assimilated." << std::endl;
    std::cout << "Resistance is futile." << std::endl;
}

Borg::Ship::~Ship(void)
{
}

void Borg::Ship::setupCore(WarpSystem::Core *core)
{
    this->core = core;
}

void Borg::Ship::checkCore(void)
{
    bool status = this->core->checkReactor()->isStable();

    if (status) {
        std::cout << "Everything is in order." << std::endl;
    } else {
        std::cout << "Critical failure imminent." << std::endl;
    }
}

bool Borg::Ship::move(int warp, Destination d)
{
    if (warp <= this->_maxWarp && d != this->_location
        && this->core->checkReactor()->isStable() == true) {
        this->_location = d;
        return (true);
    }
    return (false);
}

bool Borg::Ship::move(int warp)
{
    if (warp <= this->_maxWarp && this->_location != this->_home
        && this->core->checkReactor()->isStable() == true) {
        this->_location = this->_home;
        return (true);
    }
    return (false);
}

bool Borg::Ship::move(Destination d)
{
    if (d != this->_location
         && this->core->checkReactor()->isStable() == true) {
        this->_location = d;
        return (true);
    }
    return (false);
}

bool Borg::Ship::move()
{
    if (this->_location != this->_home
        && this->core->checkReactor()->isStable() == true) {
        this->_location = this->_home;
        return (true);
    }
    return (false);
}

int Borg::Ship::getShield(void)
{
    return (this->_shield);
}

void Borg::Ship::setShield(int shield)
{
    this->_shield = shield;
}

int Borg::Ship::getWeaponFrequency(void)
{
    return (this->_weaponFrequency);
}

void Borg::Ship::setWeaponFrequency(int freq)
{
    this->_weaponFrequency = freq;
}

short Borg::Ship::getRepair(void)
{
    return (this->_repair);
}

void Borg::Ship::setRepair(short repair)
{
    this->_repair = repair;
}

void Borg::Ship::fire(Federation::Starfleet::Ship *target)
{
    target->setShield(target->getShield() - this->getWeaponFrequency());
    std::cout << "Firing on target with " << this->_weaponFrequency;
    std::cout << "GW frequency." << std::endl;
}

void Borg::Ship::fire(Federation::Ship *target)
{
    WarpSystem::Core *core = target->getCore();
    WarpSystem::QuantumReactor *reactor = core->checkReactor();

    reactor->setStability(false);
    std::cout << "Firing on target with " << this->_weaponFrequency;
    std::cout << "GW frequency." << std::endl;
}

void Borg::Ship::repair(void)
{
    if (this->_repair > 0) {
        this->_repair -= 1;
        this->_shield = 100;
        std::cout << "Begin shield re-initialisation... Done.";
        std::cout << " Awaiting further instructions." << std::endl;
    }
    else {
        std::cout << "Energy cells depleted, shield weakening." << std::endl;
    }
}