/*
** EPITECH PROJECT, 2021
** CppPool Day07A ex01
** File description:
** parts
*/

#include "Parts.hpp"

Arms::Arms(std::string serial, bool functional)
{
    this->_serial = serial;
    this->_functional = functional;
}

Arms::~Arms(void) {}

bool Arms::isFunctional(void)
{
    if (this->_functional)
        return (true);
    return (false);
}

std::string Arms::serial(void)
{
    return (this->_serial);
}

void Arms::informations(void)
{
    std::string status = "KO";

    if (this->_functional)
        status = "OK";
    std::cout << "\t[Parts] Arms " << this->_serial << " status : " << status << std::endl;
}

Legs::Legs(std::string serial, bool functional)
{
    this->_serial = serial;
    this->_functional = functional;
}

Legs::~Legs(void) {}

bool Legs::isFunctional(void)
{
    if (this->_functional)
        return (true);
    return (false);
}

std::string Legs::serial(void)
{
    return (this->_serial);
}

void Legs::informations(void)
{
    std::string status = "KO";

    if (this->_functional)
        status = "OK";
    std::cout << "\t[Parts] Legs " << this->_serial << " status : " << status << std::endl;
}

Head::Head(std::string serial, bool functional)
{
    this->_serial = serial;
    this->_functional = functional;
}

Head::~Head(void) {}

bool Head::isFunctional(void)
{
    if (this->_functional)
        return (true);
    return (false);
}

std::string Head::serial(void)
{
    return (this->_serial);
}

void Head::informations(void)
{
    std::string status = "KO";

    if (this->_functional)
        status = "OK";
    std::cout << "\t[Parts] Head " << this->_serial << " status : " << status << std::endl;
}