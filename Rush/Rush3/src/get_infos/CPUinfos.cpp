/*
** EPITECH PROJECT, 2021
** getCPUinfos
** File description:
** getCPUinfos
*/

#include <sstream>
#include "infos.hpp"

std::string CPUinfos::getPercent()
{
    this->getCPUInfos();
    this->calculPercentCPU();
    std::string s = std::to_string(this->_percent);
    return (s);
}

const std::string CPUinfos::getMhz(int i)
{
    return (this->_array.at(i));
}

int CPUinfos::getSizeMhz()
{
    return (this->_array.size());
}

std::string CPUinfos::getCore()
{
    return (this->_cores);
}

void CPUinfos::calculPercentCPU()
{
    std::string nb;
    float mhz = 0;
    float ghz = 0;
    size_t pos = 0;
    int i = 0;
    this->_array.clear();
    
    while (pos < this->_Mhz.find_last_of(' ')) {
        pos = this->_Mhz.find(' ');
        nb = this->_Mhz.substr(0, pos);
        if (nb != "") {
            this->_array.push_back(nb);
            mhz += std::stof(nb);
        }
        this->_Mhz = this->_Mhz.substr(pos + 1, this->_Mhz.npos);
        i++;
    }
    ghz = std::stof(this->_Ghz);
    ghz *= 1000;
    mhz = mhz / i;
    this->_percent = (mhz * 100) / ghz;
}

void CPUinfos::getCPUInfos()
{
    std::string str;
    std::string str2;
    const char *Mhz = "cpu";
    std::ifstream fichier("/proc/cpuinfo");
    size_t pos;

    if(fichier.is_open())
    {
        while(std::getline(fichier, str, '\n')) {
            pos = str.find(64);
            if (pos < str.size())
                this->_Ghz = str.substr((pos + 2), str.size());
            pos = str.find(Mhz);
            if (pos != str.npos) {
                str2 = str.substr(pos + 4, str.size());
                pos = str2.find("M");
                if (pos != str2.npos) {
                    str2 = str2.substr(pos, str2.size());
                    pos = str2.find(":");
                    if (pos < str2.size()) {
                        this->_Mhz += str2.substr(pos + 2, str2.size());
                        this->_Mhz += ' ';
                    }
                }
                pos = str2.find("cores");
                if (pos != str2.npos) {
                    str2 = str2.substr(pos, str2.size());
                    pos = str2.find(":");
                    if (pos < str2.size()) {
                        this->_cores = str2.substr(pos + 2, str2.size());
                    }
                }
            }
        }
        fichier.close();
    }
}

CPUinfos::CPUinfos()
{
    getCPUInfos();
    calculPercentCPU();
}

CPUinfos::~CPUinfos()
{
}
