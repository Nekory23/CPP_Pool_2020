/*
** EPITECH PROJECT, 2021
** CppPool Day14M ex00
** File description:
** fruit node
*/

#ifndef _FRUIT_NODE_
#define _FRUIT_NODE_

#include "Fruit.hpp"

struct FruitNode
{
    Fruit *_fruit;
    FruitNode *next;
};

#endif