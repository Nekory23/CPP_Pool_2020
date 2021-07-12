/*
** EPITECH PROJECT, 2021
** CppPool Day16 ex01
** File description:
** event
*/

#include "Event.hpp"

Event::Event(void) {}

Event::Event(unsigned int ntime, const std::string &nevent)
{
    this->time = ntime;
    this->event = nevent;
}

Event::Event(const Event &copy)
{
    this->time = copy.time;
    this->event = copy.event;
}

Event &Event::operator=(const Event &copy)
{
    this->time = copy.time;
    this->event = copy.event;
    return (*this);
}

Event::~Event(void) {}

unsigned int Event::getTime(void) const
{
    return (this->time);
}

const std::string &Event::getEvent(void) const
{
    return (this->event);
}

void Event::setTime(unsigned int ntime)
{
    this->time = ntime;
}

void Event::setEvent(const std::string &action)
{
    this->event = action;
}