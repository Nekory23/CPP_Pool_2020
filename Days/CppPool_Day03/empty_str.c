/*
** EPITECH PROJECT, 2021
** CppPool Day03 ex09
** File description:
** empty
*/

#include "string.h"

int empty(const string_t *this)
{
    if (this->str == NULL)
        return (0);
    if (this->str[0] == '\0')
        return (1);
    return (0);
}
