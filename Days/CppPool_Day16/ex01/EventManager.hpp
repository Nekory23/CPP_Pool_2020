/*
** EPITECH PROJECT, 2021
** CppPool Day16 ex01
** File description:
** event manager
*/

#ifndef _EVENT_MANAGER_
#define _EVENT_MANAGER_

#include <list>
#include "Event.hpp"

class EventManager {
public :
    EventManager();
    EventManager(const EventManager &);
    EventManager &operator=(const EventManager &);
    ~EventManager();

    void addEvent(const Event &); // add an event to the list if not prior to current time
    void removeEventsAt(unsigned int); // remove all events at [time]
    void dumpEvents(void) const; // print all events in the list
    void dumpEventAt(unsigned int) const; // print all events at time

    void addTime(unsigned int);
    void addEventList(const std::list<Event> &event);
private :
    Event _events;
    std::list<Event> _list;
    unsigned int _current_time;
};

#endif