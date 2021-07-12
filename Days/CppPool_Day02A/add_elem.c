/*
** EPITECH PROJECT, 2021
** Cpp_Pool Day02A ex00
** File description:
** add elems to a linked list
*/

#include <stdio.h>
#include <stdlib.h>
#include "double_list.h"

bool create_first_node(double_list_t *head, double elem)
{
    (*head) = malloc(sizeof(double_list_t));
    if ((*head) == NULL)
        return (false);
    (*head)->value = elem;
    (*head)->next = NULL;
    return (true);
}

bool double_list_add_elem_at_front(double_list_t *front_ptr, double elem)
{
    double_list_t new;

    if (double_list_is_empty(*front_ptr))
        return (create_first_node(front_ptr, elem));
    new = malloc(sizeof(double_list_t));
    if (new == NULL)
        return (false);
    new->value = elem;
    new->next = (*front_ptr);
    (*front_ptr) = new;
    return (true);
}

bool double_list_add_elem_at_back(double_list_t *front_ptr, double elem)
{
    double_list_t new;
    double_list_t current = *front_ptr;

    if (double_list_is_empty(*front_ptr))
        return (create_first_node(front_ptr, elem));
    new = malloc(sizeof(double_list_t));
    if (new == NULL)
        return (false);
    new->value = elem;
    new->next = NULL;
    while (current->next != NULL)
        current = current->next;
    current->next = new;
    return (true);
}

bool double_list_add_elem_at_position(double_list_t *front_ptr, double elem,
                                      unsigned int position)
{
    double_list_t new = malloc(sizeof(double_list_t));
    double_list_t current = *front_ptr;
    unsigned int nbr = double_list_get_size(*front_ptr);

    if (position > nbr || new == NULL)
        return (false);
    if (position == 0 || position == 1)
        return (double_list_add_elem_at_front(front_ptr, elem));
    for (unsigned int i = 0; i != (position - 2); i++)
        current = current->next;
    new->value = elem;
    new->next = current->next;
    current->next = new;
    return (true);
}
