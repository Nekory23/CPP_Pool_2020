/*
** EPITECH PROJECT, 2021
** CppPool Day15 ex04
** File description:
** ex04
*/

#include "ex04.hpp"

template <>
Tester<int>::Tester(void) {}
template <>
Tester<float>::Tester(void) {}
template <>
Tester<double>::Tester(void) {}
template <>
Tester<std::string>::Tester(void) {}

template <>
Tester<int>::~Tester(void) {}
template <>
Tester<float>::~Tester(void) {}
template <>
Tester<double>::~Tester(void) {}
template <>
Tester<std::string>::~Tester(void) {}

template <>
bool Tester<int>::equal(const int &a, const int &b)
{
    if (a == b)
        return (true);
    return (false);
}
template <>
bool Tester<float>::equal(const float &a, const float &b)
{
    if (a == b)
        return (true);
    return (false);
}
template <>
bool Tester<double>::equal(const double &a, const double &b)
{
    if (a == b)
        return (true);
    return (false);
}
template <>
bool Tester<std::string>::equal(const std::string &a, const std::string &b)
{
    if (a.compare(b) == 0)
        return (true);
    return (false);
}

template <>
bool equal<int>(const int &a, const int &b)
{
    if (a == b)
        return (true);
    return (false);
}
template <>
bool equal<float>(const float &a, const float &b)
{
    if (a == b)
        return (true);
    return (false);
}
template <>
bool equal<double>(const double &a, const double &b)
{
    if (a == b)
        return (true);
    return (false);
}
template <>
bool equal<std::string>(const std::string &a, const std::string &b)
{
    if (a.compare(b) == 0)
        return (true);
    return (false);
}