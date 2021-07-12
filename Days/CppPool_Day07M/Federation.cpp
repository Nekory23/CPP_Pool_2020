/*
** EPITECH PROJECT, 2021
** CppPool Day07M ex00
** File description:
** federation.cpp
*/

#include <iostream>
#include "Federation.hpp"

Federation::Starfleet::Ensign::Ensign(std::string name)
{
    this->_name = name;
    std::cout << "Ensign " << this->_name;
    std::cout << ", awaiting orders." << std::endl;
}

Federation::Starfleet::Ensign::~Ensign(void)
{
}

Federation::Starfleet::Captain::Captain(std::string name)
{
    this->_name = name;
}

Federation::Starfleet::Captain::~Captain(void)
{
}

std::string Federation::Starfleet::Captain::getName(void)
{
    return (this->_name);
}

int Federation::Starfleet::Captain::getAge(void)
{
    return (this->_age);
}

void Federation::Starfleet::Captain::setAge(int age)
{
    this->_age = age;
}

Federation::Starfleet::Ship::Ship(int length, int width,
                                  std::string name, short maxWarp, int torpedo)
{
    this->_length = length;
    this->_width = width;
    this->_name = name;
    this->_maxWarp = maxWarp;
    this->_home = EARTH;
    this->_location = this->_home;
    this->_shield = 100;
    this->_photonTorpedo = torpedo;
    std::cout << "The ship USS " << this->_name << " has been finished." << std::endl;
    std::cout << "It is " << this->_length << " m in length and " << this->_width;
    std::cout << " m in width." << std::endl;
    std::cout << "It can go to Warp " << this->_maxWarp << "!" << std::endl;
    if (this->_photonTorpedo != 0) {
        std::cout << "Weapons are set: " << this->_photonTorpedo;
        std::cout << " torpedoes ready." << std::endl;
    }
}

Federation::Starfleet::Ship::~Ship(void)
{
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
    this->core = core;
    std::cout << "USS " << this->_name << ": The core is set." << std::endl;
}

void Federation::Starfleet::Ship::checkCore(void)
{
    bool status = this->core->checkReactor()->isStable();

    if (status) {
        std::cout << "USS " << this->_name << ": The core is ";
        std::cout << "stable at the time." << std::endl;
    }
    else {
        std::cout << "USS " << this->_name << ": The core is ";
        std::cout << "unstable at the time." << std::endl;
    }
}

void Federation::Starfleet::Ship::promote(Federation::Starfleet::Captain *captain)
{
    this->captain = captain;
    std::cout << this->captain->getName();
    std::cout <<": I'm glad to be the captain of the USS ";
    std::cout << this->_name << "." << std::endl;
}

bool Federation::Starfleet::Ship::move(int warp, Destination d)
{
    if (warp <= this->_maxWarp && d != this->_location
        && this->core->checkReactor()->isStable() == true) {
        this->_location = d;
        return (true);
    }
    return (false);
}

bool Federation::Starfleet::Ship::move(int warp)
{
    if (warp <= this->_maxWarp && this->_location != this->_home
        && this->core->checkReactor()->isStable() == true) {
        this->_location = this->_home;
        return (true);
    }
    return (false);
}

bool Federation::Starfleet::Ship::move(Destination d)
{
    if (d != this->_location
        && this->core->checkReactor()->isStable() == true) {
        this->_location = d;
        return (true);
    }
    return (false);
}

bool Federation::Starfleet::Ship::move()
{
    if (this->_location != this->_home
        && this->core->checkReactor()->isStable() == true) {
        this->_location = this->_home;
        return (true);
    }
    return (false);
}

int Federation::Starfleet::Ship::getShield(void)
{
    return (this->_shield);
}

void Federation::Starfleet::Ship::setShield(int shield)
{
    this->_shield = shield;
}

int Federation::Starfleet::Ship::getTorpedo(void)
{
    return (this->_photonTorpedo);
}

void Federation::Starfleet::Ship::setTorpedo(int torpedo)
{
    this->_photonTorpedo = torpedo;
}

void Federation::Starfleet::Ship::fire(Borg::Ship *target)
{
    if (this->_photonTorpedo == 0) {
        std::cout << this->_name << ": No enough torpedoes to fire, ";
        std::cout << this->captain->getName() << "!" << std::endl;
    } else {
        this->_photonTorpedo -= 1;
        target->setShield(target->getShield() - 50);
        if (this->_photonTorpedo != 0) {
            std::cout << this->_name << ": Firing on target. " << this->_photonTorpedo;
            std::cout << " torpedoes remaining." << std::endl;
        } else {
            std::cout << this->_name << ": No more torpedo to fire, ";
            std::cout << this->captain->getName() << "!" << std::endl;
        }
    }
}

void Federation::Starfleet::Ship::fire(int nbr, Borg::Ship *target)
{
    if ((this->_photonTorpedo - nbr) < 0) {
        std::cout << this->_name << ": No enough torpedoes to fire, ";
        std::cout << this->captain->getName() << "!" << std::endl;
    } else {
        this->_photonTorpedo -= nbr;
        target->setShield(target->getShield() - (50 * nbr));
        if (this->_photonTorpedo != 0) {
            std::cout << this->_name << ": Firing on target. " << this->_photonTorpedo;
            std::cout << " torpedoes remaining." << std::endl;
        } else {
            std::cout << this->_name << ": No more torpedo to fire, ";
            std::cout << this->captain->getName() << "!" << std::endl;
        }
    }
}

Federation::Ship::Ship(int length, int width, std::string name)
{
    this->_length = length;
    this->_width = width;
    this->_name = name;
    this->_maxWarp = 1;
    this->_home = VULCAN;
    this->_location = this->_home;
    std::cout << "The independent ship " << this->_name;
    std::cout << " just finished its construction." << std::endl;
    std::cout << "It is " << this->_length << " m in length and ";
    std::cout << this->_width << " m in width." << std::endl;
}

Federation::Ship::~Ship(void)
{
}

void Federation::Ship::setupCore(WarpSystem::Core *core)
{
    this->core = core;
    std::cout << this->_name << ": The core is set." << std::endl;
}

void Federation::Ship::checkCore(void)
{
    bool status = this->core->checkReactor()->isStable();

    if (status) {
        std::cout << this->_name << ": The core is ";
        std::cout << "stable at the time." << std::endl;
    }
    else {
        std::cout << this->_name << ": The core is ";
        std::cout << "unstable at the time." << std::endl;
    }
}

bool Federation::Ship::move(int warp, Destination d)
{
    if (warp <= this->_maxWarp && d != this->_location
        && this->core->checkReactor()->isStable() == true) {
        this->_location = d;
        return (true);
    }
    return (false);
}

bool Federation::Ship::move(int warp)
{
    if (warp <= this->_maxWarp && this->_location != this->_home
        && this->core->checkReactor()->isStable() == true) {
        this->_location = this->_home;
        return (true);
    }
    return (false);
}

bool Federation::Ship::move(Destination d)
{
    if (d != this->_location
        && this->core->checkReactor()->isStable() == true) {
        this->_location = d;
        return (true);
    }
    return (false);
}

bool Federation::Ship::move()
{
    if (this->_location != this->_home
        && this->core->checkReactor()->isStable() == true) {
        this->_location = this->_home;
        return (true);
    }
    return (false);
}

WarpSystem::Core *Federation::Ship::getCore(void)
{
    return (this->core);
}
