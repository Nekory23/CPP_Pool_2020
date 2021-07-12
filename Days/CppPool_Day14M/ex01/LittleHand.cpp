/*
** EPITECH PROJECT, 2021
** CppPool Day14M ex01
** File description:
** little hand
*/

#include "LittleHand.hpp"

void LittleHand::sortFruitBox(FruitBox &u, FruitBox &le, FruitBox &b, FruitBox &li)
{
    FruitBox temp(u.nbFruits());
    Fruit *current;

    while ((current = u.pickFruit())) {
        if (current->getName().compare("banana") == 0) {
            if (b.putFruit(current) == false)
                temp.putFruit(current);
        }
        else if (current->getName().compare("lemon") == 0) {
            if (le.putFruit(current) == false)
                temp.putFruit(current);
        }
        else if (current->getName().compare("lime") == 0) {
            if (li.putFruit(current) == false)
                temp.putFruit(current);
        }
        else
            temp.putFruit(current);
    }
    while ((current = temp.pickFruit()))
        u.putFruit(current);
}