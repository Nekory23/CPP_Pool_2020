/*
** EPITECH PROJECT, 2021
** CppPool Day07M exOO
** File description:
** federation.hpp
*/

#ifndef _FEDERATION_HPP_
#define _FEDERATION_HPP_

namespace Federation {
    namespace Starfleet {
        class Captain;
        class Ship;
        class Ensign;
    };
    class Ship;
};

#include "Borg.hpp"
#include "WarpSystem.hpp"
#include "Destination.hpp"

namespace Federation {
    namespace Starfleet {
        class Captain {
        public :
            Captain(std::string name);
            ~Captain(void);
            std::string getName(void);
            int getAge(void);
            void setAge(int);
        private :
            std::string _name;
            int _age;
        };
        class Ship {
        public :
            Ship(int, int, std::string name, short, int torpedo = 0);
            ~Ship(void);
            void setupCore(WarpSystem::Core *core);
            void checkCore(void);
            void promote(Captain *);
            bool move(int, Destination d);
            bool move(int);
            bool move(Destination d);
            bool move();
            int getShield();
            void setShield(int);
            int getTorpedo();
            void setTorpedo(int);
            void fire(Borg::Ship *);
            void fire(int, Borg::Ship *);
        private :
            int _length;
            int _width;
            std::string _name;
            short _maxWarp;
            WarpSystem::Core *core;
            Captain *captain;
            Destination _location;
            Destination _home;
            int _shield;
            int _photonTorpedo;
        };
        class Ensign {
        public :
            Ensign(std::string name);
            ~Ensign(void);
        private :
            std::string _name;
        };
    }
    class Ship {
    public :
        Ship(int, int, std::string name);
        ~Ship(void);
        void setupCore(WarpSystem::Core *core);
        void checkCore(void);
        bool move(int, Destination);
        bool move(int);
        bool move(Destination);
        bool move();
        WarpSystem::Core *getCore(void);
    private :
        int _length;
        int _width;
        std::string _name;
        short _maxWarp;
        WarpSystem::Core *core;
        Destination _location;
        Destination _home;
    };
}


#endif
