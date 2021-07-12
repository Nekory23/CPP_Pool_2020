/*
** EPITECH PROJECT, 2021
** Cpp_Pool Day02M ex02
** File description:
** tab_to_2dtab.c
*/

#include <stdio.h>
#include <stdlib.h>

void tab_to_2dtab(const int *tab, int lenght, int width, int ***res)
{
    int z = 0;

    *res = malloc(sizeof(int *) * lenght);
    for (int i = 0; i != lenght; i++)
        (*res)[i] = malloc(sizeof(int) * width);
    for (int i = 0; i != lenght; i++)
        for (int j = 0; j != width; j++, z++)
            (*res)[i][j] = tab[z];
}
