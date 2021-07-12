/*
** EPITECH PROJECT, 2021
** CppPool Day10 ex00
** File description:
** sorcerer
*/

#ifndef _SORCERER_HPP_
#define _SORCERER_HPP_

#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer {
public :
    Sorcerer(const std::string, const std::string);
    ~Sorcerer();

    std::string getName() const;
    std::string getTitle() const;

    void polymorph(const Victim &) const;
    void polymorph(const Peon &) const;
private :
    std::string _name;
    std::string _title;
};

std::ostream &operator<<(std::ostream &, const Sorcerer &);

#endif