/*
** EPITECH PROJECT, 2021
** CppPool Day15 ex02
** File description:
** templates
*/

#ifndef _TEMPLATES_
#define _TEMPLATES_

#include <iostream>

int min(int a, int b)
{
    std::cout << "non-template min" << std::endl;
    if (a < b)
        return (a);
    else if (b < a)
        return (b);
    else
        return (a);
}

template <typename T>
const T &min(const T &a, const T &b)
{
    std::cout << "template min" << std::endl;
    if (a < b)
        return (a);
    else if (b < a)
        return (b);
    else
        return (a);
}

int nonTemplateMin(int *a, int size)
{
    int res = a[0];

    for (int i = 1; i != size; i++)
        res = min(res, a[i]);
    return (res);
}

template <typename T, typename S>
const T &templateMin(const T *array, const S size)
{
    T &res = const_cast<T&>(array[0]);
    for (int i = 1; i != size; i++)
        res = min<T>(res, array[i]);
    return (res);

}

#endif