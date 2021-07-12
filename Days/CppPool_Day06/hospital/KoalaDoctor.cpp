/*
** EPITECH PROJECT, 2021
** CppPool Day06 ex04
** File description:
** KoalaDoctor
*/

#include "KoalaDoctor.hpp"

KoalaDoctor::KoalaDoctor(std::string doctor_name)
{
    this->name = doctor_name;
    this->is_working = false;
    std::cout << "Dr." << this->name << ": I'm Dr.";
    std::cout << this->name << "! How do you kreog?" << std::endl;
}

KoalaDoctor::~KoalaDoctor(void)
{
}

void KoalaDoctor::diagnose(SickKoala *patient)
{
    std::string p_name = patient->getName();
    std::string filename;
    const char *drug_list[5];

    drug_list[0] = "Mars";
    drug_list[1] = "Kinder";
    drug_list[2] = "Crunch";
    drug_list[3] = "Maroilles";
    drug_list[4] = "Eucalyptus leaf";
    std::cout << "Dr." << this->name << ": So what's goerking you Mr.";
    std::cout << p_name << "?" << std::endl;
    filename.assign(p_name);
    filename.append(".report");
    std::ofstream fd(filename);
    if (fd)
        fd << drug_list[random() % 5] << std::endl;
    patient->poke();
}

void KoalaDoctor::timeCheck(void)
{
    if (this->is_working) {
        this->is_working = false;
        std::cout << "Dr." << this->name;
        std::cout << ": Time to go home to my eucalyptus forest!" << std::endl;
    } else {
        this->is_working = true;
        std::cout << "Dr." << this->name;
        std::cout << ": Time to get to work!" << std::endl;
    }
}
