/*
** EPITECH PROJECT, 2021
** CppPool Day14A ex03
** File description:
** simple ptr
*/

#include "SimplePtr.hpp"

SimplePtr::SimplePtr(BaseComponent *rawPtr) : _rawPtr(rawPtr) {}

SimplePtr::~SimplePtr(void) 
{
    delete this->_rawPtr;
}

BaseComponent *SimplePtr::get(void) const
{
    return (this->_rawPtr);
}

SimplePtr::SimplePtr(SimplePtr const &copy) 
{
    this->_rawPtr = copy.get();
}

SimplePtr &SimplePtr::operator=(SimplePtr const &copy)
{
    this->_rawPtr = copy.get();
    return (*this);
}