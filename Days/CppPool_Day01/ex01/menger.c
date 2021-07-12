/*
** EPITECH PROJECT, 2021
** Cpp_Pool Day01 ex01
** File description:
** menger.c
*/

#include "menger.h"

void print_one(int info, int mode)
{
    if (info > 0 && info < 10) {
        printf("00%d", info);
        if (mode == 1)
            printf(" ");
    }
    else if (info >= 10 && info < 100) {
        printf("0%d", info);
        if (mode == 1)
            printf(" ");
    } else {
        printf("%d", info);
        if (mode == 1)
            printf(" ");
    }
}

void menger(int size, int level, int x, int y)
{
    size /= 3;
    print_one(size, 1);
    print_one(x + size, 1);
    print_one(y + size, 2);
    printf("\n");
    if ((level > 1) && (size / 3) > 0) {
        level -= 1;
        menger(size, level, x, y);
        menger(size, level, x, y + size);
        menger(size, level, x, y + size + size);
        menger(size, level, x + size, y);
        menger(size, level, x + size, y + size + size);
        menger(size, level, x + size + size, y);
        menger(size, level, x + size + size, y + size);
        menger(size, level, x + size + size, y + size + size);
    }
}
