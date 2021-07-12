/*
** EPITECH PROJECT, 2021
** CppPool Day16 ex00
** File description:
** vector
*/

#ifndef _DOMESTIC_KOALA_
#define _DOMESTIC_KOALA_

#include <vector>
#include <iostream>
#include "KoalaAction.hpp"

class DomesticKoala {
public :
    using methodPointer_t = void (KoalaAction::*)(const std::string &);

    DomesticKoala(KoalaAction &);
    DomesticKoala(const DomesticKoala &);
    DomesticKoala &operator=(const DomesticKoala &);
    ~DomesticKoala();

    const std::vector<methodPointer_t> *getActions() const;

    void learnAction(unsigned char, methodPointer_t);
    void unlearnAction(unsigned char);
    void doAction(unsigned char, const std::string &);
    void setKoalaAction(KoalaAction &);
private :
    KoalaAction k_action;
    std::vector<methodPointer_t> _action;
};

#endif