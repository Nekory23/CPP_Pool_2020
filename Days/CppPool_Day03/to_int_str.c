/*
** EPITECH PROJECT, 2021
** CppPool Day03 ex12
** File description:
** to_int
*/

#include <string.h>
#include <stdlib.h>
#include "string.h"

int to_int(const string_t *this)
{
    return (atoi(this->str));
}
