/*
** EPITECH PROJECT, 2021
** CppPool Day13 ex00
** File description:
** toy
*/

#ifndef _TOY_
#define _TOY_

#include <iostream>
#include "Picture.hpp"

class Toy {
public :
    enum ToyType {
        BASIC_TOY,
        ALIEN,
        BUZZ,
        WOODY
    };
    class Error {
    public :
        enum ErrorType {
            UNKNOWN,
            PICTURE,
            SPEAK
        };
        Error();
        std::string where() const;
        std::string what() const;
        ErrorType type;
    };
    Toy();
    Toy(const Toy &copy);
    Toy(ToyType, const std::string &, const std::string &);
    ~Toy();
    Toy &operator=(const Toy &copy);

    ToyType getType(void) const;
    std::string getName(void) const;
    std::string getAscii(void) const;

    void setName(const std::string &);
    bool setAscii(const std::string &);

    virtual bool speak(const std::string &);
    virtual bool speak_es(const std::string &);

    Toy &operator<<(const std::string &);

    Error &getLastError(void);
protected :
    Error error;
    ToyType _type;
    std::string _name;
    Picture _pic;
};

std::ostream &operator<<(std::ostream &, const Toy &);

#endif