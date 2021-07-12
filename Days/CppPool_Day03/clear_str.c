/*
** EPITECH PROJECT, 2021
** CppPool Day03 ex04
** File description:
** clear
*/

#include <stdlib.h>
#include <string.h>
#include "string.h"

void clear(string_t *this)
{
    free(this->str);
    this->str = "\0";
}
