/*
** EPITECH PROJECT, 2021
** CppPool rush3
** File description:
** classes to stock informations
*/

#ifndef _INFOS_
#define _INFOS_

#include <iostream>
#include <ctime>
#include <chrono>
#include <fstream>
#include <vector>
#include <algorithm>
#include <sys/utsname.h>

class UserInfo {
public :
    UserInfo();
    
    std::string getUserName(void) const;
    std::string getHostName(void) const;

    void setUserName(std::string _name);
    void setHostName(std::string _host);

    void refreshInfos(void);
private :
    std::string _userName;
    std::string _hostName;
    bool _activated;
};

class SystemInfo {
public :
    SystemInfo();

    std::string getOpSystem(void) const;
    std::string getKernelVersion(void) const;

    void setOpSystem(void);
    void setKernelVersion(void);

    void refreshInfos(void);

    struct utsname _osData;
private :
    std::string _operatingSystem;
    std::string _kernelVersion;
    bool _activated;
};

class DateTime {
public :
    DateTime();

    std::string getTime(void) const;
    void setTime(void);

    void refreshInfos(void);
private :
    std::chrono::system_clock::time_point clock;
    std::string _time;
    bool _activated;
};

class CPUinfos
{
private:
    std::string _allInfos;
    std::string _Mhz;
    std::string _Ghz;
    float _percent;
    std::string _cores;
    std::vector<std::string>_array;
public:
    CPUinfos();
    ~CPUinfos();
    void getCPUInfos();
    void calculPercentCPU();
    std::string getPercent();
    const std::string getMhz(int i);
    int getSizeMhz();
    std::string getCore();
};

class RamInfo {
public :
    RamInfo();
    void setValues(void);

    int get_memTotal(void) const;
    int get_memAvail(void) const;
    int get_memFree(void) const;

    void refreshInfos(void);
private :
    int _memFree;
    int _memAvailable;
    int _memTotal;
};

#endif
