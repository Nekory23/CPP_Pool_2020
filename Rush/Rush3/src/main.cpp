/*
** EPITECH PROJECT, 2021
** CppPool Rush3
** File description:
** main
*/

#include "core.hpp"

int main(int ac, char **av, char **env)
{
    if (env == NULL)
        return 84;
    if (ac != 2) {
        std::cout << "Invalid command retry with -help" << std::endl;
        return (ERROR);
    }
    core(av[1]);
    return (SUCCESS);
}