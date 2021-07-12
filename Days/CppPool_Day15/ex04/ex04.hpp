/*
** EPITECH PROJECT, 2021
** CppPool Day15 ex04
** File description:
** ex04
*/

#ifndef _TEMPLATES_
#define _TEMPLATES_

#include <iostream>

template <typename T>
bool equal(const T &a, const T &b);

template <typename T>
class Tester {
public :
    Tester();
    ~Tester();
    bool equal(const T &, const T &);
};

#endif