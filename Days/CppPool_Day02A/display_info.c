/*
** EPITECH PROJECT, 2021
** Cpp_Pool Day02A ex00
** File description:
** display the informations of the list
*/

#include <stddef.h>
#include <stdio.h>
#include "double_list.h"

void double_list_dump(double_list_t list)
{
    while(list != NULL) {
        printf("%f\n", list->value);
        list = list->next;
    }
}

unsigned int double_list_get_size(double_list_t list)
{
    int nbr = 0;

    while(list != NULL) {
        nbr++;
        list = list->next;
    }
    return (nbr);
}

bool double_list_is_empty(double_list_t list)
{
    if (list == NULL)
        return (true);
    return (false);
}
