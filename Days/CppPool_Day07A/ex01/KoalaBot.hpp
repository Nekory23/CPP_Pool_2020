/*
** EPITECH PROJECT, 2021
** CppPool Day07A ex01
** File description:
** koala bot
*/

#ifndef _KOALABOT_HPP_
#define _KOALABOT_HPP_

#include <iostream>
#include "Parts.hpp"

class KoalaBot {
public :
    KoalaBot(std::string serial = "Bob-01");
    ~KoalaBot();
    void setParts(Arms &);
    void setParts(Legs &);
    void setParts(Head &);
    void swapParts(Arms &);
    void swapParts(Legs &);
    void swapParts(Head &);
    const void informations(void);
    const bool status(void);
private :
    std::string _serial;
    Arms _arms;
    Legs _legs;
    Head _head;
};

#endif