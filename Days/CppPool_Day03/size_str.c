/*
** EPITECH PROJECT, 2021
** CppPool Day03 ex05
** File description:
** size
*/

#include <stdlib.h>
#include <string.h>
#include "string.h"

int size(const string_t *this)
{
    if (this->str == NULL)
        return (-1);
    return (strlen(this->str));
}
