/*
** EPITECH PROJECT, 2021
** CppPool rush3
** File description:
** get the system informations
*/

#include "infos.hpp"

SystemInfo::SystemInfo(void)
{
    this->_activated = true;
    this->setKernelVersion();
    this->setOpSystem();
}

std::string SystemInfo::getKernelVersion(void) const
{
    return (this->_kernelVersion);
}

std::string SystemInfo::getOpSystem(void) const
{
    return (this->_operatingSystem);
}

void SystemInfo::setKernelVersion(void)
{
    int status = uname(&this->_osData);

    if (status == -1)  {
        std::cerr << "error." << std::endl;
        exit (84);
    }
    this->_kernelVersion = (std::string)this->_osData.release;
}

void SystemInfo::setOpSystem(void)
{
    int status = uname(&this->_osData);

    if (status == -1)  {
        std::cerr << "error." << std::endl;
        exit (84);
    }
    this->_operatingSystem = (std::string)this->_osData.sysname;
}

void SystemInfo::refreshInfos(void)
{
    this->setKernelVersion();
    this->setOpSystem();
}