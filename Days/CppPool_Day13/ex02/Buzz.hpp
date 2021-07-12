/*
** EPITECH PROJECT, 2021
** CppPool Day13 ex02
** File description:
** buzz
*/

#ifndef _BUZZ_
#define _BUZZ_

#include "Toy.hpp"

class Buzz : public Toy {
public :
    Buzz(const std::string &, const std::string &file = "./buzz.txt");
    ~Buzz();
};

#endif