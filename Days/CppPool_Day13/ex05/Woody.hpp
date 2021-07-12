/*
** EPITECH PROJECT, 2021
** CppPool Day13 ex02
** File description:
** woody
*/

#ifndef _WOODY_
#define _WOODY_

#include "Toy.hpp"

class Woody : public Toy {
public :
    Woody(const std::string &, const std::string &file = "./woody.txt");
    ~Woody();
    bool speak(const std::string &) override;
    bool speak_es(const std::string &) override;
};

#endif