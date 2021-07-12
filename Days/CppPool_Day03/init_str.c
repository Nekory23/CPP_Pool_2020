/*
** EPITECH PROJECT, 2021
** Cpp_Pool Day03 ex00
** File description:
** init and destroys a str
*/

#include <string.h>
#include <stdlib.h>
#include "string.h"

void string_init(string_t *this, const char *s)
{
    this->str = malloc(sizeof(char) * (strlen(s) + 1));
    this->str = strcpy(this->str, s);
    this->assign_s = &assign_s;
    this->assign_c = &assign_c;
    this->append_s = &append_s;
    this->append_c = &append_c;
    this->at = &at;
    this->clear = &clear;
    this->size = &size;
    this->compare_c = &compare_c;
    this->compare_s = &compare_s;
    this->copy = &copy;
    this->c_str = &c_str;
    this->empty = &empty;
    this->find_c = &find_c;
    this->find_s = &find_s;
    this->insert_c = &insert_c;
    this->insert_s = &insert_s;
    this->to_int = &to_int;
}

void string_destroy(string_t *this)
{
    if (this->str[0] != '\0')
        free(this->str);
}
