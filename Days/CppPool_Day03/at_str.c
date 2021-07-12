/*
** EPITECH PROJECT, 2021
** CppPool Day03 ex03
** File description:
** at
*/

#include <stdlib.h>
#include <string.h>
#include "string.h"

char at(const string_t *this, size_t pos)
{
    unsigned long len = strlen(this->str);

    if (pos > len)
        return (-1);
    return (this->str[pos]);
}
