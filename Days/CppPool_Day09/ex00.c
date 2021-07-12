/*
** EPITECH PROJECT, 2021
** CppPool Day09 ex00
** File description:
** ex00
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ex00.h"

static void cthulhu_initializer(cthulhu_t *this)
{
    printf("----\nBuilding Cthulhu\n");
    this->m_name = strdup("Cthulhu");
    this->m_power = 42;
}

cthulhu_t *new_cthulhu(void)
{
    cthulhu_t *this = malloc(sizeof(cthulhu_t));

    cthulhu_initializer(this);
    return (this);
}

static void koala_initializer(koala_t *this, char *_name, char _is_A_Legend)
{
    this->m_parent = *new_cthulhu();
    printf("Building %s\n", _name);
    this->m_parent.m_name = strdup(_name);
    this->m_is_a_legend = _is_A_Legend;
    if (this->m_is_a_legend != 1)
        this->m_parent.m_power = 0;
    else
        this->m_parent.m_power = 42;
}

koala_t *new_koala(char *name, char is_a_legend)
{
    koala_t *this = malloc(sizeof(koala_t));

    koala_initializer(this, name, is_a_legend);
    return (this);
}

void print_power(cthulhu_t *this)
{
    printf("Power => %d\n", this->m_power);
}

void attack(cthulhu_t *this)
{
    if (this->m_power >= 42) {
        this->m_power -= 42;
        printf("%s attacks and destroys the city\n", this->m_name);
    }
    else
        printf("%s can't attack, he doesn't have enough power\n", this->m_name);
}

void sleeping(cthulhu_t *this)
{
    printf("%s sleeps\n", this->m_name);
    this->m_power += 42000;
}

void eat(koala_t *this)
{
    printf("%s eats\n", this->m_parent.m_name);
    this->m_parent.m_power += 42;
}