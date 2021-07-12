/*
** EPITECH PROJECT, 2021
** CppPool Day06 ex04
** File description:
** KoalaDoctor
*/

#ifndef _KOALADOCTOR_HPP_
#define _KOALADOCTOR_HPP_

#include <iostream>
#include <fstream>
#include "SickKoala.hpp"

class KoalaDoctor {
public :
    KoalaDoctor(std::string);
    ~KoalaDoctor(void);
    void diagnose(SickKoala *patient);
    void timeCheck(void);
private :
    std::string name;
    bool is_working;
};

#endif
