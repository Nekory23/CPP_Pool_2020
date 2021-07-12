/*
** EPITECH PROJECT, 2021
** CppPool Day07A ex00
** File description:
** skat
*/

#include "Skat.hpp"

Skat::Skat(const std::string &name, int stimPaks)
{
    this->soldier_name = name;
    this->SP_nbr = stimPaks;
}

Skat::~Skat(void)
{
}

int &Skat::stimPaks(void)
{
    return (this->SP_nbr);
}

const std::string &Skat::name(void)
{
    return (this->soldier_name);
}

void Skat::shareStimPaks(int to_give, int &ally_stock)
{
    if (this->SP_nbr - to_give <= 0) {
        ally_stock += this->SP_nbr;
        std::cout << "Don't be greedy" << std::endl;
        this->SP_nbr = 0;
    } else {
        ally_stock += to_give;
        this->SP_nbr = this->SP_nbr - to_give;
        std::cout << "Keep the change." << std::endl;
    }
}

void Skat::addStimPaks(unsigned int nbr)
{
    this->SP_nbr = this->SP_nbr + nbr;
    if (nbr == 0)
        std::cout << "Hey boya, did you forget something?" << std::endl;
}

void Skat::useStimPaks(void)
{
    if (this->SP_nbr > 0) {
        this->SP_nbr -= 1;
        std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
    } else
        std::cout << "Mediiiiiic" << std::endl;
}

void Skat::status(void)
{
    std::cout << "Soldier " << this->soldier_name;
    std::cout << " reporting " << this->SP_nbr;
    std::cout << " stimpaks remaining sir!" << std::endl;
}
