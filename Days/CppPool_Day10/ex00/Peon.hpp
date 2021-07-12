/*
** EPITECH PROJECT, 2021
** CppPool Day10 ex00
** File description:
** peon
*/

#ifndef _PEON_HPP_
#define _PEON_HPP_

#include "Victim.hpp"

class Peon : public Victim {
public :
    Peon(const std::string name);
    ~Peon();

    void getPolymorphed(void) const override;
};

#endif
