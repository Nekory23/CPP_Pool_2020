/*
** EPITECH PROJECT, 2021
** CppPool Day07M
** File description:
** BorgQueen
*/

#ifndef _BORGQUEEN_HPP_
#define _BORGQUEEN_HPP_

#include "Borg.hpp"
#include "Destination.hpp"

namespace Borg {
    class BorgQueen {
    public :
        BorgQueen(void);
        void (Borg::Ship::*firePtr)(Federation::Starfleet::Ship *target);
        void fire(Borg::Ship *ship, Federation::Starfleet::Ship *target);
        bool (Borg::Ship::*movePtr)(Destination dest);
        bool move(Borg::Ship *ship, Destination dest);
        void (Borg::Ship::*destroyPtr)(Federation::Ship *target);
        void destroy(Borg::Ship *ship, Federation::Ship *target);
    };
}

#endif
