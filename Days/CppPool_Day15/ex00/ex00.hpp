/*
** EPITECH PROJECT, 2021
** CppPool Day15 ex00
** File description:
** templates
*/

#ifndef _TEMPLATES_
#define _TEMPLATES_

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T temp = b;

    b = a;
    a = temp;
}

template <typename T>
const T &min(const T &a, const T &b)
{
    if (a < b)
        return (a);
    else if (b < a)
        return (b);
    else 
        return (b);
}

template <typename T>
const T &max(const T &a, const T &b)
{
    if (a > b)
        return (a);
    if (b > a)
        return (b);
    else
        return (b);
}

template <typename T>
T add(const T &a, const T &b)
{
    return (a + b);
}

#endif