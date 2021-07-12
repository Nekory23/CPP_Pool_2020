/*
** EPITECH PROJECT, 2021
** CppPool Day06 ex02
** File description:
** SickKoala.hpp
*/

#ifndef _SICKKOALA_HPP_
#define _SICKKOALA_HPP_

#include <iostream>
#include <fstream>
#include <string>

class SickKoala {
public:
    SickKoala(std::string);
    ~SickKoala(void);
    void poke(void);
    bool takeDrug(std::string);
    void overDrive(std::string);
    std::string getName(void);
private:
    std::string name;
};

#endif
