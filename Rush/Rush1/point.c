/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#define _GNU_SOURCE
#include <stdio.h>
#include "point.h"
#include "new.h"

typedef struct
{
    Class   base;
    int     x;
    int     y;
}   PointClass;

static void Point_ctor(PointClass *this, va_list *args)
{
    if (this == NULL)
        raise("Class is not allocated");
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
}

static void Point_dtor(PointClass *this)
{
}

static char *to_string(PointClass *this)
{
    char *str;

    asprintf(&str, "<%s (%d, %d)>",
             this->base.__name__, this->x, this->y);
    return (str);
}

static Object *add(const Object *this, const Object *other)
{
    PointClass *res = new(Point);
    PointClass *this_bis = (PointClass *)this;
    PointClass *other_bis = (PointClass *)other;

    res->x = this_bis->x + other_bis->x;
    res->y = this_bis->y + other_bis->y;
    return (res);
}

static Object *sub(const Object *this, const Object *other)
{
    PointClass *res = new(Point);
    PointClass *this_bis = (PointClass *)this;
    PointClass *other_bis = (PointClass *)other;

    res->x = this_bis->x - other_bis->x;
    res->y = this_bis->y - other_bis->y;
    return (res);
}

static const PointClass _description = {
    {
        .__size__ = sizeof(PointClass),
        .__name__ = "Point",
        .__ctor__ = (ctor_t)&Point_ctor,
        .__dtor__ = (dtor_t)&Point_dtor,
        .__str__ = (to_string_t)&to_string,
        .__add__ = (binary_operator_t)&add,
        .__sub__ = (binary_operator_t)&sub,
        .__mul__ = NULL,
        .__div__ = NULL,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0
};

const Class   *Point = (const Class *)&_description;
