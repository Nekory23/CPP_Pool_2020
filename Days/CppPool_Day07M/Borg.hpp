/*
** EPITECH PROJECT, 2021
** CppPool Day07M ex01
** File description:
** Borg
*/

#ifndef _BORG_HPP_
#define _BORG_HPP_

#include <iostream>

namespace Borg {
    class Ship;
};

#include "WarpSystem.hpp"
#include "Destination.hpp"
#include "Federation.hpp"

namespace Borg {
    class Ship {
    public :
        Ship(int weaponFrequency = 20, short repair = 3);
        ~Ship(void);
        void setupCore(WarpSystem::Core *);
        void checkCore(void);
        bool move(int, Destination d);
        bool move(int);
        bool move(Destination d);
        bool move();
        int getShield(void);
        void setShield(int);
        int getWeaponFrequency(void);
        void setWeaponFrequency(int);
        void setRepair(short);
        short getRepair(void);
        void fire(Federation::Starfleet::Ship *target);
        void fire(Federation::Ship *target);
        void repair(void);
    private :
        int _side;
        short _maxWarp;
        WarpSystem::Core *core;
        Destination _location;
        Destination _home;
        int _shield;
        int _weaponFrequency;
        short _repair;
    };
}

#endif
