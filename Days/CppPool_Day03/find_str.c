/*
** EPITECH PROJECT, 2021
** CppPool Day03 ex10
** File description:
** find
*/

#include <stdlib.h>
#include <string.h>
#include "string.h"

int find_c(const string_t *this, const char *str, size_t pos)
{
    int u = 0;

    if (pos > strlen(this->str))
        return (-1);
    for (; this->str[pos] != '\0'; pos++) {
        for (int z = pos; str[u] != '\0'; z++, u++)
            if (this->str[z] != str[u]) {
                u = 0;
                break;
            }
        if (str[u] == '\0')
            return (pos);
    }
    return (-1);
}

int find_s(const string_t *this, const string_t *str, size_t pos)
{
    return (find_c(this, str->str, pos));
}
