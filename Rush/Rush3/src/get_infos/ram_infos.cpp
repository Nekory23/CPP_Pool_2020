/*
** EPITECH PROJECT, 2021
** CppPool rush3
** File description:
** classes to stock informations
*/

#include "infos.hpp"

RamInfo::RamInfo(void)
{
    this->setValues();
}

void RamInfo::setValues(void)
{
    std::ifstream fd("/proc/meminfo");
    std::vector<std::string> data;
    std::vector<std::string> values;
    std::vector<std::string>::iterator it;
    std::string line;
    int j = 0;

    if (fd) {
        while (std::getline(fd, line))
            data.push_back(line);
        for (it = data.begin(); it != data.end(); it++, j++) {
            if (data[j].compare(0, 8, "MemTotal") == 0)
                values.push_back(data[j]);
            if (data[j].compare(0, 7, "MemFree") == 0)
                values.push_back(data[j]);
            if (data[j].compare(0, 12, "MemAvailable") == 0)
                values.push_back(data[j]);
        }
        values[0].erase(0, 10);
        values[0].erase(remove_if(values[0].begin(), values[0].end(), isspace), values[0].end());
        values[1].erase(0, 10);
        values[1].erase(remove_if(values[1].begin(), values[1].end(), isspace), values[1].end());
        values[2].erase(0, 15);
        values[2].erase(remove_if(values[2].begin(), values[2].end(), isspace), values[2].end());
        this->_memTotal = std::atoi(values[0].c_str());
        this->_memTotal /= 1000;
        if (this->_memTotal > 1000)
            this->_memTotal /= 1000;
        this->_memFree = std::atoi(values[1].c_str());
        this->_memFree /= 1000;
        this->_memAvailable = std::atoi(values[2].c_str());
        this->_memAvailable /= 1000;
    }
}

int RamInfo::get_memTotal(void) const
{
    return (this->_memTotal);
}

int RamInfo::get_memFree(void) const
{
    return (this->_memFree);
}

int RamInfo::get_memAvail(void) const
{
    return (this->_memAvailable);
}

void RamInfo::refreshInfos(void)
{
    this->setValues();
}