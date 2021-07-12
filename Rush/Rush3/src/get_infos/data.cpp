/*
** EPITECH PROJECT, 2021
** CPUinfos class
** File description:
** all infos class
*/

#include "data.hpp"

Data::Data(void)
{
    this->_u_info = new UserInfo;
    this->_s_info = new SystemInfo;
    this->_time = new DateTime;
    this->_cpu_info = new CPUinfos;
}

UserInfo &Data::get_Uinfo(void) const
{
    return (*this->_u_info);
}

SystemInfo &Data::get_Sinfo(void) const
{
    return (*this->_s_info);
}

DateTime &Data::get_time(void) const
{
    return (*this->_time);
}

CPUinfos &Data::get_CPUinfo(void) const 
{
    return (*this->_cpu_info);
}

RamInfo &Data::get_RamInfos(void) const
{
    return (*this->_ram_info);
}