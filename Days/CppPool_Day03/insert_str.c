/*
** EPITECH PROJECT, 2021
** CppPool Day03 ex11
** File description:
** insert
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

void insert_c(string_t *this, size_t pos, const char *str)
{
    char *temp;
    int len = 0;

    if (pos > strlen(this->str))
        return (append_c(this, str));
    temp = malloc(sizeof(char) * (strlen(this->str) + strlen(str) + 1));
    for (unsigned long i = 0; i != pos; i++)
        temp[i] = this->str[i];
    temp[pos] = '\0';
    strcat(temp, str);
    len = strlen(temp);
    for (; this->str[pos] != '\0'; len++, pos++)
        temp[len] = this->str[pos];
    temp[len] = '\0';
    free(this->str);
    this->str = temp;
}

void insert_s(string_t *this, size_t pos, const string_t *str)
{
    return (insert_c(this, pos, str->str));
}
