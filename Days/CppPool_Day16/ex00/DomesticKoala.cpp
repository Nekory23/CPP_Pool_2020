/*
** EPITECH PROJECT, 2021
** CppPool Day16 ex00
** File description:
** vector
*/

#include "DomesticKoala.hpp"
#include "KoalaAction.hpp"

DomesticKoala::DomesticKoala(KoalaAction &koalaAction) : _action(256)
{
    this->k_action = koalaAction;
}

DomesticKoala::DomesticKoala(const DomesticKoala &copy)
{
    this->k_action = copy.k_action;
    this->_action = copy._action;
}

DomesticKoala &DomesticKoala::operator=(const DomesticKoala &copy)
{
    if (this != &copy) {
        this->k_action = copy.k_action;
        if (this->_action.empty() == false)
            this->_action.clear();
        for (unsigned int i = 0; i < copy._action.size(); i++)
                this->_action.push_back(copy._action[i]);
    }
    return (*this);
}

DomesticKoala::~DomesticKoala(void) {}

const std::vector<DomesticKoala::methodPointer_t> *DomesticKoala::getActions() const
{
    return (&this->_action);
}

void DomesticKoala::learnAction(unsigned char c, methodPointer_t action)
{
    this->_action[c] = action;
}

void DomesticKoala::unlearnAction(unsigned char c)
{
    this->_action[c] = NULL;
}

void DomesticKoala::doAction(unsigned char c, const std::string &str)
{
    methodPointer_t func = this->_action[c];
    if (func)
        (this->k_action.*func)(str);
}

void DomesticKoala::setKoalaAction(KoalaAction &koala_action)
{
    this->k_action = koala_action;
}