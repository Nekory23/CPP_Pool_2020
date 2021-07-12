/*
** EPITECH PROJECT, 2021
** CppPool Day07A ex00
** File description:
** skat
*/

#ifndef _SKAT_H_
#define _SKAT_H_

#include <iostream>

class Skat {
public :
    Skat(const std::string &name = "bob", int stimPaks = 15);
    ~Skat(void);
    int &stimPaks();
    const std::string &name();
    void shareStimPaks(int number, int &stock);
    void addStimPaks(unsigned int number);
    void useStimPaks(void);
    void status(void);
private :
    std::string soldier_name;
    int SP_nbr;
};

#endif
