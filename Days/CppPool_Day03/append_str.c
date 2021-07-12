/*
** EPITECH PROJECT, 2021
** CppPool Day03 ex02
** File description:
** append
*/

#include <stdlib.h>
#include <string.h>
#include "string.h"

void append_c(string_t *this, const char *ap)
{
    int len = strlen(this->str) + strlen(ap) + 1;
    char *temp = malloc(sizeof(char) * len);

    temp = strcpy(temp, this->str);
    free(this->str);
    this->str = strcat(temp, ap);
}

void append_s(string_t *this, const string_t *ap)
{
    append_c(this, ap->str);
}
