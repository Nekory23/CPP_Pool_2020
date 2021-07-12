/*
** EPITECH PROJECT, 2021
** CppPool Day06 ex03
** File description:
** KoalaNurse.hpp
*/

#ifndef _KOALANURSE_H_
#define _KOALANURSE_H_

#include <iostream>
#include <string>
#include "SickKoala.hpp"

class KoalaNurse {
public:
    KoalaNurse(int);
    ~KoalaNurse(void);
    void giveDrug(std::string str, SickKoala *);
    std::string readReport(std::string);
    void timeCheck(void);
private:
    int id;
    bool is_working;
};

#endif
