/*
** EPITECH PROJECT, 2021
** Cpp_Pool Day02M ex03
** File description:
** func_ptr.h
*/

#ifndef _FUNC_PTR_H_
#define _FUNC_PTR_H_

#include "func_ptr_enum.h"

typedef void (*func_t)(const char *str);

typedef struct which_action_t {
    action_t action;
    func_t func;
} which_action_t;

#endif
