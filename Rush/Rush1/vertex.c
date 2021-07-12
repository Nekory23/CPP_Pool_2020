/*
** EPITECH PROJECT, 2021
** vertex
** File description:
** vertex
*/

#define _GNU_SOURCE
#include <stdio.h>
#include "vertex.h"
#include "new.h"

typedef struct
{
    Class   base;
    int     x, y, z;
}   VertexClass;

static void Vertex_ctor(VertexClass *this, va_list *args)
{
    if (this == NULL)
        raise("Class is not allocated");
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
    this->z = va_arg(*args, int);
}

static void Vertex_dtor(VertexClass *this)
{
}

static char *to_string(VertexClass *this)
{
    char *str;

    asprintf(&str, "<%s (%d, %d, %d)>",
             this->base.__name__, this->x, this->y, this->z);
    return (str);
}

static Object *add(const Object *this, const Object *other)
{
    VertexClass *res = new(Vertex);
    VertexClass *this_bis = (VertexClass *)this;
    VertexClass *other_bis = (VertexClass *)other;

    res->x = this_bis->x + other_bis->x;
    res->y = this_bis->y + other_bis->y;
    res->z = this_bis->z + other_bis->z;
    return (res);
}

static Object *sub(const Object *this, const Object *other)
{
    VertexClass *res = new(Vertex);
    VertexClass *this_bis = (VertexClass *)this;
    VertexClass *other_bis = (VertexClass *)other;

    res->x = this_bis->x - other_bis->x;
    res->y = this_bis->y - other_bis->y;
    res->z = this_bis->z - other_bis->z;
    return (res);
}

static const VertexClass _description = {
    {
        .__size__ = sizeof(VertexClass),
        .__name__ = "Vertex",
        .__ctor__ = (ctor_t)&Vertex_ctor,
        .__dtor__ = (dtor_t)&Vertex_dtor,
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

const Class   *Vertex = (const Class *)&_description;
