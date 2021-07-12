/*
** EPITECH PROJECT, 2021
** Cpp_Pool Day02M ex03
** File description:
** func_ptr.c
*/

#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "func_ptr.h"

void print_normal(const char *str)
{
    printf("%s\n", str);
}

void print_reverse(const char *str)
{
    int i = 0;
    int j = 0;
    int len = strlen(str);
    char *temp = malloc(sizeof(char) * (len + 1));

    strcpy(temp, str);
    for (i = len - 1; i >= 0; i--)
        temp[j++] = str[i];
    temp[i] = '\0';
    printf("%s\n", temp);
    free(temp);
}

void print_upper(const char *str)
{
    char *temp = malloc(sizeof(char) * (strlen(str) + 1));

    strcpy(temp, str);
    for (int i = 0; temp[i] != '\0'; i++) {
        if (islower(temp[i]))
            temp[i] = temp[i] - 32;
    }
    printf("%s\n", temp);
    free(temp);
}

void print_42(const char *str)
{
    char *temp = strdup(str);
    free(temp);
    printf("42\n");
}

void do_action(action_t action, const char *str)
{
    int i = 0;
    which_action_t which[] = {
        {PRINT_NORMAL, &print_normal},
        {PRINT_REVERSE, &print_reverse},
        {PRINT_UPPER, &print_upper},
        {PRINT_42, &print_42},
    };


    while (i != 4) {
        if (action == which[i].action)
            ((*which[i].func)(str));
        i++;
    }
}
