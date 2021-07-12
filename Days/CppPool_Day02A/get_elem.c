/*
** EPITECH PROJECT, 2021
** Cpp_Pool Day02A ex00
** File description:
** get an element from the list
*/

#include <stddef.h>
#include <stdio.h>
#include "double_list.h"

double double_list_get_elem_at_front(double_list_t list)
{
    if (list != NULL)
        return (list->value);
    return (0);
}

double double_list_get_elem_at_back(double_list_t list)
{
    if (list != NULL) {
        while (list->next != NULL)
            list = list->next;
        return (list->value);
    }
    return (0);
}

double double_list_get_elem_at_position(double_list_t list,
                                        unsigned int position)
{
    unsigned int nbr = double_list_get_size(list);

    if (list != NULL) {
        if (position == 0)
            return (double_list_get_elem_at_front(list));
        if (nbr >= position) {
            for (unsigned int i = 0; i != (position - 1); i++)
                list = list->next;
            return (list->value);
        }
    }
    return (0);
}

doublelist_node_t *double_list_get_first_node_with_value(double_list_t list,
                                                         double value)
{
    if (list != NULL)
        while (list != NULL) {
            if (list->value == value)
                return (list);
            list = list->next;
        }
    return (NULL);
}
