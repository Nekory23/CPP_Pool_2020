/*
** EPITECH PROJECT, 2021
** CppPool rush3
** File description:
** get the date and time informations
*/

#include "infos.hpp"

DateTime::DateTime(void)
{
    this->setTime();
}

std::string DateTime::getTime(void) const
{
    return (this->_time);
}

void DateTime::setTime(void)
{
    this->clock = std::chrono::system_clock::now();
    time_t tt = std::chrono::system_clock::to_time_t(this->clock);
    this->_time = ctime(&tt);
}

void DateTime::refreshInfos(void)
{
    this->setTime();
}