/*
** EPITECH PROJECT, 2021
** CppPool Rush3
** File description:
** core
*/

#include <cstring>
#include "core.hpp"

void core(char *arg)
{
    if (strcmp(arg, "-g") == 0)
        display_graphic();
    else if (strcmp(arg, "-t") == 0)
        display_text();
    else if (strcmp(arg, "-help") == 0)
        display_help();
    else {
        std::cout << "Invalid command retry with -help" << std::endl;
        exit (84);
    }
}