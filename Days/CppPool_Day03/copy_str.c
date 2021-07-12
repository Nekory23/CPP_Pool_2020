/*
** EPITECH PROJECT, 2021
** CppPool Day03 ex07
** File description:
** copy
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "string.h"

size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    size_t len = strlen(this->str);
    size_t i = 0;

    if (pos > len)
        return (0);
    for (; this->str[pos] != '\0'; pos++, i++) {
        if (i == n)
            break;
        s[i] = this->str[pos];
    }
    s[i] = '\0';
    len = strlen(s);
    if (this->str[pos] == '\0' && i != n) {
        s[i + 1] = '\0';
        len++;
    }
    return (len);
}
