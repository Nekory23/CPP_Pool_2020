/*
** EPITECH PROJECT, 2021
** CppPool Day13 ex00
** File description:
** picture
*/

#include <fstream>
#include "Picture.hpp"

Picture::Picture(void)
{
    std::string empty;

    this->data = empty;
}

Picture::Picture(const std::string &file)
{
    std::string line;
    std::string empty;
    std::ifstream fd(file);

    if (file.empty()) {
        this->data = empty;
        return;
    }
    if (fd)
        while(std::getline(fd, line)) {
            this->data.append(line);
            this->data.append("\n");
        }
    else
        this->data = "ERROR";
}

Picture::~Picture(void) {}

bool Picture::getPictureFromFile(const std::string &file)
{
    std::string line;
    std::ifstream fd(file);

    if (fd) {
        if (this->data.empty() != true)
            this->data.clear();
        while (std::getline(fd, line)) {
            this->data.append(line);
            this->data.append("\n");
        }
        return (true);
    }
    else 
        this->data = "ERROR";
    return (false);
}