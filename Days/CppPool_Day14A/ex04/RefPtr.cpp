/*
** EPITECH PROJECT, 2021
** CppPool Day14A ex04
** File description:
** refptr
*/

#include "RefPtr.hpp"

RefPtr::RefPtr(BaseComponent *rawPtr) : _rawPtr(rawPtr) 
{
    this->_counter = new int;
    *this->_counter = 1;
}

RefPtr::RefPtr(RefPtr const &other) : _rawPtr(other._rawPtr), _counter(other._counter)
{
    this->_counter++;
}

RefPtr &RefPtr::operator=(RefPtr const &other)
{
    if (this->_counter-- == 0)
        delete this->_rawPtr;
    this->_rawPtr = other._rawPtr;
    this->_counter = other._counter;
    this->_counter++;
    return (*this);
}

RefPtr::~RefPtr(void) 
{
    if (this->_counter == 0)
        delete this->_rawPtr;
}

BaseComponent *RefPtr::get(void) const
{
    return (this->_rawPtr);
}