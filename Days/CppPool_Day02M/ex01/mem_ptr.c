/*
** EPITECH PROJECT, 2021
** Cpp_Pool Day02M ex01
** File description:
** mem_ptr.c
*/

#include <stdlib.h>
#include <string.h>
#include "mem_ptr.h"

void add_str(const char *str1, const char *str2, char **res)
{
    int len = strlen(str1) + strlen(str2) + 1;

    *res = malloc(sizeof(char) * len);
    strcat(*res, str1);
    strcat(*res, str2);
}

void add_str_struct(str_op_t *str_op)
{
    int len = strlen(str_op->str1) + strlen(str_op->str2) + 1;

    str_op->res = malloc(sizeof(char) * len);
    strcat(str_op->res, str_op->str1);
    strcat(str_op->res, str_op->str2);
}
