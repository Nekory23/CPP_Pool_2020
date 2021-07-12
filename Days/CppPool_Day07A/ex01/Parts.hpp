/*
** EPITECH PROJECT, 2021
** CppPool Day07A ex01
** File description:
** parts
*/

#ifndef _PARTS_HPP_
#define _PARTS_HPP_

#include <iostream>

class Arms {
public :
    Arms(std::string serial = "A-01", bool functional = true);
    ~Arms();
    bool isFunctional(void);
    std::string serial(void);
    void informations(void);
private :
    std::string _serial;
    bool _functional;
};

class Legs {
public :
    Legs(std::string serial = "L-01", bool functional = true);
    ~Legs();
    bool isFunctional(void);
    std::string serial(void);
    void informations(void);
private :
    std::string _serial;
    bool _functional;
};

class Head {
public :
    Head(std::string serial = "H-01", bool functional = true);
    ~Head();
    bool isFunctional(void);
    std::string serial(void);
    void informations(void);
private :
    std::string _serial;
    bool _functional;
};

#endif