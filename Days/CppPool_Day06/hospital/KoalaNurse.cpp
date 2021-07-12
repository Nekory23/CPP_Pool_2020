/*
** EPITECH PROJECT, 2021
** CppPool Day06 ex03
** File description:
** KoalaNurse.cpp
*/

#include <fstream>
#include "SickKoala.hpp"
#include "KoalaNurse.hpp"

KoalaNurse::KoalaNurse(int nurse_id)
{
    this->id = nurse_id;
    this->is_working = false;
}

KoalaNurse::~KoalaNurse(void)
{
    std::cout << "Nurse " << this->id << ": Finally some rest!" << std::endl;
}

void KoalaNurse::giveDrug(std::string str, SickKoala *patient)
{
    if (patient)
        patient->takeDrug(str);
}

std::string KoalaNurse::readReport(std::string filename)
{
    std::ifstream fd(filename);
    std::string drug_name;
    size_t pos = 0;

    if (fd || filename.find(".report") == 0)
        if (std::getline(fd, drug_name)) {
            while ((pos = filename.find(".")) != std::string::npos)
            filename.replace(pos, 7, "\0");
            std::cout << "Nurse " << this->id << ": Kreog! Mr.";
            std::cout << filename << " needs a " << drug_name;
            std::cout << "!" << std::endl;
            return (drug_name);
        }
    else
        return (drug_name);
    return (drug_name);
}

void KoalaNurse::timeCheck(void)
{
    if (this->is_working) {
        this->is_working = false;
        std::cout << "Nurse " << this->id;
        std::cout << ": Time to go home to my eucalyptus forest!" << std::endl;
    } else {
        this->is_working = true;
        std::cout << "Nurse " << this->id;
        std::cout << ": Time to get to work!" << std::endl;
    }
}
