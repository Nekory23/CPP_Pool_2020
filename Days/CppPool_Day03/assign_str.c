/*
** EPITECH PROJECT, 2021
** CppPool Day03 ex01
** File description:
** assign_str.c
*/

#include <string.h>
#include <stdlib.h>
#include "string.h"

void assign_c(string_t *this, const char *s)
{
    free(this->str);
    this->str = strdup(s);
}

void assign_s(string_t *this, const string_t *str)
{
    assign_c(this, str->str);
}
