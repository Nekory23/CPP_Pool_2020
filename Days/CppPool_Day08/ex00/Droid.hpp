/*
** EPITECH PROJECT, 2021
** CppPool Day08 ex00
** File description:
** droid
*/

#ifndef DROID_HPP_
#define DROID_HPP_

#include <iostream>

class Droid
{
    private :
        std::string Id;
        size_t Energy;
        const size_t Attack;
        const size_t Toughness;
        std::string *Status;
    public :
        Droid(std::string nbr = "");
        Droid(const Droid &);
        ~Droid();
        std::string getId(void) const;
        size_t getEnergy(void) const;
        size_t getAttack(void) const;
        size_t getToughness(void) const;
        std::string *getStatus(void) const;
        void setId(std::string);
        void setEnergy(size_t);
        void setStatus(std::string *);
        Droid &operator=(const Droid &);
        bool operator==(const Droid &) const;
        bool operator!=(const Droid &) const;
        Droid &operator<<(size_t &);
};

std::ostream &operator<<(std::ostream &, const Droid &);

#endif
