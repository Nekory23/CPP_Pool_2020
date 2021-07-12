/*
** EPITECH PROJECT, 2021
** CppPool Day15 ex01
** File description:
** compare template
*/

#ifndef _COMPARE_
#define _COMPARE_

#include <iostream>
#include <cstring>

template <typename T>
int compare(const T &a, const T &b)
{
    if (a == b)
        return (0);
    else if (a < b)
        return (-1);
    else
        return (1);
}

template <>
int compare<const char *>(const char * const &a, const char * const &b)
{
    int res = 0;

    res = strcmp(a, b);
    if (res < 0)
        return (-1);
    if (res > 0)
        return (1);
    return (0);
}

#endif