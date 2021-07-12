/*
** EPITECH PROJECT, 2021
** CppPool Day06 ex00
** File description:
** main
*/

#include <iostream>
#include <fstream>

int my_cat(char *file_name)
{
    std::string line;
    std::ifstream fd(file_name);

    if (fd)
        while (std::getline(fd, line))
            std::cout << line << std::endl;
    else {
        std::cerr << "my_cat: " << file_name;
        std::cerr << ": No such file or directory" << std::endl;
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 1) {
        std::cerr << "my_cat: Usage: ./my_cat file [...]" << std::endl;
        return (84);
    }
    for (int i = 1; i != ac; i++)
        my_cat(av[i]);
    return (0);
}