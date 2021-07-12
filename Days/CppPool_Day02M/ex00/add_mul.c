/*
** EPITECH PROJECT, 2021
** Cpp_Pool Day02M ex00
** File description:
** add_mul.c
*/

void add_mul_4param(int first, int second, int *sum, int *product)
{
    *sum = first + second;
    *product = first * second;
}

void add_mul_2param(int *first, int *second)
{
    int temp = *first;

    *first = temp + *second;
    *second = temp * *second;
}
