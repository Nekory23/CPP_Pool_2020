/*
** EPITECH PROJECT, 2021
** CppPool Day13 ex06
** File description:
** toy story
*/

#ifndef _TOY_STORY_
#define _TOY_STORY_

#include "Toy.hpp"

class ToyStory {
private :
    bool (*func1)(const std::string &);
    bool (*func2)(const std::string &);
public :
    ToyStory();
    ~ToyStory();
    static void tellMeAStory(const std::string &, Toy &, 
                      bool (Toy::*func1)(const std::string &m), 
                      Toy &, bool (Toy::*func2)(const std::string &m));
};

#endif