/*
** EPITECH PROJECT, 2021
** rush
** File description:
** new.c
*/

#include "new.h"

Object *va_new(const Class *class, va_list *ap)
{
    Object *inst = malloc(class->__size__);

    if (!inst)
        raise("Error while allocating memory");
    if (!memcpy(inst, class, class->__size__))
        raise("Error while copying memory");;
    if (class->__ctor__)
        class->__ctor__(inst, ap);
    return (inst);
}

Object *new(const Class *class, ...)
{
    va_list args;
    Object *instance = NULL;

    va_start(args, class);
    instance = va_new(class, &args);
    va_end(args);
    return (instance);
}

void delete(Object *ptr)
{
    Class *class = (Class *)ptr;

    if (!ptr)
        raise("Delete can't free NULL");
    if (class->__dtor__)
        class->__dtor__(ptr);
    free(ptr);
}

