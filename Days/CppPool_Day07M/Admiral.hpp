/*
** EPITECH PROJECT, 2021
** CppPool Day07M ex04
** File description:
** admiral
*/

#ifndef _ADMIRAL_HPP_
#define _ADMIRAL_HPP_

namespace Federation {
    namespace Starfleet {
        class Amiral;
    };
};

#include <iostream>
#include "Federation.hpp"
#include "Destination.hpp"

namespace Federation {
    namespace Starfleet {
        class Admiral {
        public :
            Admiral(std::string name);
            ~Admiral(void);
            bool (Federation::Starfleet::Ship::*movePtr)(Destination dest);
            void (Federation::Starfleet::Ship::*firePtr)(Borg::Ship *target);
            void fire(Federation::Starfleet::Ship *ship, Borg::Ship *target);
            bool move(Federation::Starfleet::Ship *ship, Destination dest);
        private :
            std::string _name;
        };
    }
}

#endif