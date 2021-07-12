/*
** EPITECH PROJECT, 2021
** CppPool Day16 ex01
** File description:
** event
*/

#ifndef _EVENT_
#define _EVENT_

#include <iostream>

class Event {
public :
    Event(void);
    Event(unsigned int, const std::string &);
    Event(const Event &);
    Event &operator=(const Event &);
    ~Event(void);

    unsigned int getTime(void) const;
    const std::string &getEvent(void) const;
    
    void setTime(unsigned int);
    void setEvent(const std::string &);
private :
    unsigned int time;
    std::string event;
};

#endif