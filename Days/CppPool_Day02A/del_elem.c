/*
** EPITECH PROJECT, 2021
** Cpp_Pool Day02A ex00
** File description:
** delete elements from the list
*/

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "double_list.h"

bool double_list_del_elem_at_front(double_list_t *front_ptr)
{
    if (double_list_is_empty(*front_ptr))
        return (false);
    (*front_ptr) = (*front_ptr)->next;
    return (true);
}

bool double_list_del_elem_at_back(double_list_t *front_ptr)
{
    double_list_t current = *front_ptr;

    if (double_list_is_empty(*front_ptr))
        return (false);
    if (current->next == NULL) {
        free(current);
        current = NULL;
        return (true);
    }
    while (current->next->next != NULL)
        current = current->next;
    free(current->next);
    current->next = NULL;
    return (true);
}

bool double_list_del_elem_at_position(double_list_t *front_ptr,
                                      unsigned int position)
{
    double_list_t current = *front_ptr;
    unsigned int nbr = double_list_get_size(*front_ptr);

    if (position > nbr)
        return (false);
    if (position == 0 || position == 1)
        return (double_list_del_elem_at_front(front_ptr));
    for (unsigned int i = 0; i != (position - 2); i++)
        current = current->next;
    current->next = current->next->next;
    return (true);
}
