/*
** EPITECH PROJECT, 2021
** CppPool Day08 ex00
** File description:
** droid
*/

#include "Droid.hpp"

Droid::Droid(std::string id) : Id(id), Energy(50), Attack(25), Toughness(15), Status(new std::string("Standing by")) 
{
    std::cout << "Droid '" << this->Id << "' Activated" << std::endl;
}

Droid::Droid(const Droid &copy) : Id(copy.getId()), Energy(copy.getEnergy()), Attack(copy.getAttack()), Toughness(copy.getToughness()), Status(copy.getStatus())
{
    std::cout << "Droid '" << this->Id << "' Activated, Memory Dumped" << std::endl;
}

Droid::~Droid(void) 
{
    std::cout << "Droid '" << this->Id << "' Destroyed" << std::endl;
}

std::string Droid::getId(void) const
{
    return (this->Id);
}

void Droid::setId(std::string id)
{
    this->Id = id;
}

size_t Droid::getEnergy(void) const
{
    return (this->Energy);
}

void Droid::setEnergy(size_t energy)
{
    if (energy <= 100)
        this->Energy = energy;
}

size_t Droid::getAttack(void) const
{
    return (this->Attack);
}

size_t Droid::getToughness(void) const
{
    return (this->Toughness);
}

std::string *Droid::getStatus(void) const
{
    return (this->Status);
}

void Droid::setStatus(std::string *new_status)
{
    this->Status = new_status;
}

Droid &Droid::operator=(Droid const &copy)
{
    if (&copy != this) {
        this->Id = copy.getId();
        this->Energy = copy.getEnergy();
        if (this->Status)
            delete this->Status;
        this->Status = new std::string(*copy.getStatus());
    }
    return (*this);
}

bool Droid::operator==(const Droid &other) const
{
    if (this->Id == other.getId() && this->Energy == other.getEnergy()
        && this->Status->compare(*other.getStatus()) == 0)
            return (true);
    return (false);
}

bool Droid::operator!=(const Droid &other) const
{
    if (this->Id != other.getId() || this->Energy != other.getEnergy()
        || this->Status->compare(*other.getStatus()) !=0 )
            return (true);
    return (false);
}

Droid &Droid::operator<<(size_t &battery)
{
    size_t to_add;

    if (this->Energy >= 100) {
        this->Energy = 100;
        return(*this);
    }
    else if (this->Energy + battery > 100) {
        to_add = 100 - this->Energy;
        battery -= to_add;
        this->Energy += to_add;
        return (*this);
    } else {
        this->Energy += battery;
        battery = 0;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Droid &droid)
{
    out << "Droid '" << droid.getId() << "', " << *droid.getStatus() << ", " << droid.getEnergy();
    return (out);
}
