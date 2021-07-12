/*
** EPITECH PROJECT, 2021
** CPUinfos class
** File description:
** all infos class
*/

#ifndef _DATA_
#define _DATA_

#include "infos.hpp"

class Data {
public :
    Data();

    UserInfo &get_Uinfo() const;
    SystemInfo &get_Sinfo() const;
    DateTime &get_time() const;
    CPUinfos &get_CPUinfo() const;
    RamInfo &get_RamInfos() const;
private :
    UserInfo *_u_info;
    SystemInfo *_s_info;
    DateTime *_time;
    CPUinfos *_cpu_info;
    RamInfo *_ram_info;
};

#endif