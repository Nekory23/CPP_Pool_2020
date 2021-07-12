/*
** EPITECH PROJECT, 2021
** CppPool Day03 ex06
** File description:
** compare
*/

#include <stddef.h>
#include <string.h>
#include "string.h"

int compare_c(const string_t *this, const char *str)
{
    return (strcmp(this->str, str));
}

int compare_s(const string_t *this, const string_t *str)
{
    return (compare_c(this, str->str));
}
