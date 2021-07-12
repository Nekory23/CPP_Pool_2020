/*
** EPITECH PROJECT, 2021
** CppPool Day14A ex00
** File description:
** errors
*/

#include "Errors.hpp"

NasaError::NasaError(const std::string &message, const std::string &component)
{
    this->_message = message;
    this->_component = component;
}

const std::string &NasaError::getComponent(void) const
{
    return (this->_component);
}

const char *NasaError::what(void) const noexcept
{
    return (this->_message.c_str());
}

MissionCriticalError::MissionCriticalError(const std::string &message, const std::string &component) : NasaError(message, component) {}

LifeCriticalError::LifeCriticalError(const std::string &message, const std::string &component) : NasaError(message, component) {}

UserError::UserError(const std::string &message, const std::string &component) : NasaError(message, component) {}

CommunicationError::CommunicationError(const std::string &message) : NasaError(message, "CommunicationDevice") {}