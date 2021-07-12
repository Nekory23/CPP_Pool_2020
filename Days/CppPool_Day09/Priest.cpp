/*
** EPITECH PROJECT, 2021
** CppPool Day09 ex03
** File description:
** priest
*/

#include "Priest.hpp"

Priest::Priest(const std::string &name, int level) : Character(name, level), Mage(name, level)
{
    this->_class = "Priest";
    this->_race = "Orc";
    this->_strength = 4;
    this->_stamina = 4;
    this->_intelligence = 42;
    this->_spirit = 21;
    this->_agility = 2;
    std::cout << this->_name << " enters in the order" << std::endl;
}

Priest::~Priest(void) {}

int Priest::CloseAttack(void)
{
    int damage = 0;

    if (this->Range == CLOSE && this->_power >= 10) {
        this->_power -=10;
        damage = this->_spirit + 10;
        std::cout << this->_name << " uses a spirit explosion" << std::endl;
        this->Range = RANGE;
    }
    return (damage);
}

void Priest::Heal(void)
{
    if (this->_power >= 10) {
        this->_power -= 10;
        if (this->_pv + 70 >= 100)
            this->_pv = 100;
        else
            this->_pv += 70;
        std::cout << this->_name << " casts a little heal spell" << std::endl;
    }
}