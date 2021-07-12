/*
** EPITECH PROJECT, 2021
** CppPool Day13 ex00
** File description:
** picture
*/

#ifndef _PICTURE_
#define _PICTURE_

#include <iostream>

class Picture {
public :
    Picture(void);
    Picture(const std::string &file);
    Picture(const Picture &copy);
    ~Picture();
    Picture &operator=(const Picture &copy);
    bool getPictureFromFile(const std::string &file);
    std::string data;
};

#endif