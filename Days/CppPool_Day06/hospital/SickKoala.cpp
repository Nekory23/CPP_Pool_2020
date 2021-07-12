/*
** EPITECH PROJECT, 2021
** CppPool Day06 ex02
** File description:
** SickKoala.cpp
*/

#include "SickKoala.hpp"

SickKoala::~SickKoala(void)
{
    std::cout << "Mr." << name << ": Kreooogg!! I'm cuuuured!" << std::endl;
}

SickKoala::SickKoala(std::string k_name) : name(k_name)
{
}

void SickKoala::poke(void)
{
    std::cout << "Mr." << name << ": Gooeeeeerrk!!" << std::endl;
}

bool SickKoala::takeDrug(std::string str)
{
    if (str.compare("Mars") == 0) {
        std::cout << "Mr." << name << ": Mars, and it kreogs!" << std::endl;
        return (true);
    }
    else if (str.compare("Kinder") == 0) {
        std::cout << "Mr." << name << ": There is a toy inside!" << std::endl;
        return (true);
    } else {
        std::cout << "Mr." << name << ": Goerkreog!" << std::endl;
        return (false);
    }
}

void SickKoala::overDrive(std::string str)
{
    size_t pos = 0;

    while ((pos = str.find("Kreog!")) != std::string::npos)
        str.replace(pos, 6, "1337!");
    std::cout << "Mr." << name << ": " << str << std::endl;
}

std::string SickKoala::getName(void)
{
    return(this->name);
}
