/*
** EPITECH PROJECT, 2021
** CppPool Day14M ex00
** File description:
** fruit box
*/

#ifndef _FRUIT_BOX_
#define _FRUIT_BOX_

#include "FruitNode.hpp"

class FruitBox {
public :
    FruitBox(const int);

    int nbFruits(void) const;
    FruitNode *head(void);

    bool putFruit(Fruit *);
    Fruit *pickFruit(void);
private :
    const int _size;
    int _nbr;
    FruitNode *_head;
};

#endif