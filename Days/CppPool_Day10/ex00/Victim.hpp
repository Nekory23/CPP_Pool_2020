/*
** EPITECH PROJECT, 2021
** CppPool Day10 ex00
** File description:
** victim
*/

#ifndef _VICTIM_HPP_
#define _VICTIM_HPP_

#include <iostream>

class Victim {
public :
    Victim(const std::string);
    ~Victim(void);

    std::string getName(void) const;

    virtual void getPolymorphed(void) const;
protected :
    const std::string _name;
};

std::ostream &operator<<(std::ostream &, const Victim &);

#endif