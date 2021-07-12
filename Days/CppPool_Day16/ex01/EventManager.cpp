/*
** EPITECH PROJECT, 2021
** CppPool Day16 ex01
** File description:
** event manager
*/

#include "EventManager.hpp"

EventManager::EventManager(void) : _current_time(0) {}

EventManager::EventManager(const EventManager &copy)
{
    this->_current_time = copy._current_time;
    this->_events = copy._events;
    this->_list = copy._list;
}

EventManager &EventManager::operator=(const EventManager &copy)
{
    this->_current_time = copy._current_time;
    this->_events = copy._events;
    this->_list = copy._list;
    return (*this);
}

EventManager::~EventManager(void) {}

bool sortTime(const Event &elem, const Event &elem2)
{
    if (elem.getTime() <= elem2.getTime())
        return(true);
    return(false);
}

void EventManager::addEvent(const Event &events)
{
    if (events.getTime() < this->_current_time)
        return;
    this->_list.push_back(events);
    this->_list.sort(sortTime);
}

void EventManager::removeEventsAt(unsigned int this_time)
{
    std::list<Event>::iterator it = this->_list.begin();

    for (; it != this->_list.end(); it++)
        if (it->getTime() == this_time) {
            it = this->_list.erase(it);
            it--;
        }
}

void EventManager::dumpEvents(void) const
{
    std::list<Event>::const_iterator it = this->_list.begin();

    for (; it != this->_list.end(); it++)
        std::cout << it->getTime() << ": " << it->getEvent() << std::endl;
}

void EventManager::dumpEventAt(unsigned int this_time) const
{
    std::list<Event>::const_iterator it = this->_list.begin();

    for (; it != this->_list.end(); it++)
        if (it->getTime() == this_time)
           std::cout << (*it).getTime() << ": " << (*it).getEvent() << std::endl; 
}

void EventManager::addTime(unsigned int time)
{
    this->_current_time += time;
}

bool listSort(Event const& e1, Event const& e2)
{
    if (e1.getTime() > e2.getTime())
        return false;
    return true;
}

void EventManager::addEventList(const std::list<Event> &events)
{
    std::list<Event>::const_iterator it = events.begin();

    for (; it != events.end(); it++)
        if (it->getTime() > this->_current_time)
        this->_list.push_back(*it);
    this->_list.sort(listSort);
}