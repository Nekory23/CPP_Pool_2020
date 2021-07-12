/*
** EPITECH PROJECT, 2021
** CppPool Day13 ex06
** File description:
** toy story
*/

#include <fstream>
#include "ToyStory.hpp"

ToyStory::ToyStory(void) {}

ToyStory::~ToyStory(void) {}

void ToyStory::tellMeAStory(const std::string &filename, Toy &toy1, 
                            bool (Toy::*func1)(const std::string &m),
                            Toy &toy2, bool (Toy::*func2)(const std::string &m))
{
    std::ifstream fd(filename);
    std::string line;
    
    if (fd) {
        std::cout << toy1.getAscii() << std::endl << toy2.getAscii() << std::endl;
        for (int i = 0; std::getline(fd, line); i++) {
            if (i % 2 == 0) {
                if (line.compare(0, 8, "picture:") == 0) {
                    if (toy1.setAscii(line.substr(8)))
                        std::cout << toy1.getAscii() << std::endl;
                    else {
                        std::cout << toy1.getLastError().where() << ": " << toy1.getLastError().what() << std::endl;
                        return;
                    }
                }
                else {
                    if(!(toy1.*func1)(line)) {
                        std::cout << toy1.getLastError().where() << ": " << toy1.getLastError().what() << std::endl;
                        return;
                    }
                }
            }
            else {
                if (line.compare(0, 8, "picture:") == 0) {
                    if (toy2.setAscii(line.substr(8)))
                        std::cout << toy2.getAscii() << std::endl;
                    else {
                        std ::cout << toy2.getLastError().where() << ": " << toy2.getLastError().what() << std::endl;
                        return;
                    }
                }
                else
                    if (!(toy2.*func2)(line)) {
                        std::cout << toy2.getLastError().where() << ": " << toy2.getLastError().what() << std::endl;
                        return;
                    }
            }
        }
    }
    else
        std::cout << "Bad Story" << std::endl;
}