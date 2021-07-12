/*
** EPITECH PROJECT, 2021
** CppPool Rush3
** File description:
** display help
*/

#include <iostream>

void display_help(void)
{
    std::cout << "Help :" << std::endl;
    std::cout << "Usage :\n ./MyGKrellm [OPTION]\n" << std::endl;
    std::cout << "Options :\n-g : start in graphical mode" << std::endl;
    std::cout << "-t : start in text mode" << std::endl;
    std::cout << "-help : display this message" << std::endl;
}