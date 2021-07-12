/*
** EPITECH PROJECT, 2021
** CppPool Day17 ex00
** File description:
** find
*/

#ifndef _FIND_
#define _FIND_

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
typename T::iterator do_find(T &cont, const int nbr)
{
    return (std::find(cont.begin(), cont.end(), nbr));
}

#endif