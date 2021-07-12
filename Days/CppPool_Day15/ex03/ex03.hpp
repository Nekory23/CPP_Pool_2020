/*
** EPITECH PROJECT, 2021
** CppPool Day15 ex03
** File description:
** templates
*/

#ifndef _TEMPLATES_
#define _TEMPLATES_

#include <iostream>
#include <string>

template <typename T>
void foreach(const T *array, void(func)(const T &), int size)
{
    for (int i = 0; i != size; i++)
        (func)(array[i]);
}

template <typename T>
void print(const T &elem)
{
    std::cout << elem << std::endl;
}

#endif