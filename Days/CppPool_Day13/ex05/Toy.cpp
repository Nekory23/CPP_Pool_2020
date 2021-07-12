/*
** EPITECH PROJECT, 2021
** CppPool Day13 ex00
** File description:
** toy
*/

#include "Toy.hpp"

Toy::Toy(void)
{
    std::string empty;

    this->_name = "toy";
    this->_type = BASIC_TOY;
    this->_pic = empty;
}

Toy::Toy(const Toy &copy)
{
    this->_name = copy._name;
    this->_pic.data = copy._pic.data;
    this->_type = copy.getType();
}

Toy::Toy(ToyType type, const std::string &name, const std::string &file) : _pic(file)
{
    this->_type = type;
    this->_name = name;
}

Toy &Toy::operator=(const Toy &copy)
{
    this->_name = copy._name;
    this->_pic.data = copy._pic.data;
    this->_type = copy.getType();
    return (*this);
}

Toy::~Toy(void) {}

std::string Toy::getAscii(void) const
{
    return (this->_pic.data);
}

std::string Toy::getName(void) const
{
    return (this->_name);
}

Toy::ToyType Toy::getType(void) const
{
    return (this->_type);
}

bool Toy::setAscii(const std::string &filename)
{
    bool res;
    
    res = this->_pic.getPictureFromFile(filename);
    if (res == false) {
        this->error.type = Error::PICTURE;
        return (false);
    }
    return (true);
}

void Toy::setName(const std::string &name)
{
    this->_name = name;
}

bool Toy::speak(const std::string &statement)
{
    std::cout << this->_name << " \"" << statement << "\"" << std::endl;
    return (true);
}

Toy &Toy::operator<<(const std::string &replace)
{
    this->_pic.data = replace;
    return (*this);
}

bool Toy::speak_es(const std::string &statement)
{
    (void)statement;
    this->error.type = Error::SPEAK;
    return (false);
}

std::ostream &operator<<(std::ostream &stream, const Toy &toy)
{
    stream << toy.getName() << std::endl << toy.getAscii() << std::endl;
    return (stream);
}

Toy::Error::Error(void)
{
    this->type = UNKNOWN;
}

std::string Toy::Error::what(void) const
{
    if (this->type == UNKNOWN)
        return ("");
    else if (this->type == SPEAK)
        return ("wrong mode");
    else
        return ("bad new illustration");
}

std::string Toy::Error::where(void) const
{
    if (this->type == UNKNOWN)
        return ("");
    else if (this->type == SPEAK)
        return ("speak_es");
    else
        return ("setAscii");
}

Toy::Error &Toy::getLastError(void)
{
    if (!this->error.type)
        this->error.type = Error::UNKNOWN;
    return (this->error);
}