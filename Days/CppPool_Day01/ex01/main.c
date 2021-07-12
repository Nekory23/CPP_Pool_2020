/*
** EPITECH PROJECT, 2021
** Cpp_Pool Day01 ex01
** File description:
** main.c
*/

#include "menger.h"

int error_handling(int ac, char **av)
{
    int level = 0;
    int size = 0;

    if (ac != 3)
        return (1);
    level = atoi(av[2]);
    size = atoi(av[1]);
    if (level <= 0 || size % 3 != 0 || pow(3, level) > size)
        return (1);
    return (0);
}

int main(int ac, char **av)
{
    if (error_handling(ac, av))
        return (84);
    menger(atoi(av[1]), atoi(av[2]), 0, 0);
    return (0);
}
