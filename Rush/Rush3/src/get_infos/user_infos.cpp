/*
** EPITECH PROJECT, 2021
** CppPool rush3
** File description:
** get the user informations
*/

#include "infos.hpp"

static std::string get_info(const std::string &info)
{
    std::string value;

    if (info.compare("UserName") == 0)
        value = std::getenv("USER");
    else if (info.compare("HostName") == 0)
        value = std::getenv("HOSTNAME");
    return (value);
}

UserInfo::UserInfo(void) 
{
    this->_activated = true;
    this->_hostName = get_info("HostName");
    this->_userName = get_info("UserName");
}

std::string UserInfo::getUserName(void) const
{
    return (this->_userName);
}

std::string UserInfo::getHostName(void) const
{
    return (this->_hostName);
}

void UserInfo::setUserName(std::string _name)
{
    this->_userName = _name;
}

void UserInfo::setHostName(std::string _host)
{
    this->_hostName = _host;
}

void UserInfo::refreshInfos(void)
{
    this->_hostName = get_info("HostName");
    this->_userName = get_info("UserName");
}