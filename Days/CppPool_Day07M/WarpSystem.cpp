/*
** EPITECH PROJECT, 2021
** CppPool Day02 ex00
** File description:
** warp system
*/

#include "WarpSystem.hpp"

WarpSystem::QuantumReactor::QuantumReactor(void)
{
    this->_stability = true;
}

WarpSystem::QuantumReactor::~QuantumReactor(void)
{
}

bool WarpSystem::QuantumReactor::isStable(void)
{
    return (this->_stability);
}

void WarpSystem::QuantumReactor::setStability(bool stability)
{
    this->_stability = stability;
}

WarpSystem::Core::Core(WarpSystem::QuantumReactor *reactor)
{
    this->_coreReactor = reactor;
}

WarpSystem::Core::~Core(void)
{
}

WarpSystem::QuantumReactor *WarpSystem::Core::checkReactor(void)
{
    return (this->_coreReactor);
}
