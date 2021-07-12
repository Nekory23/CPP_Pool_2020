/*
** EPITECH PROJECT, 2021
** CppPool Day14M ex00
** File description:
** fruitbox
*/

#include "FruitBox.hpp"
#include "FruitNode.hpp"

FruitBox::FruitBox(const int max_size) : _size(max_size)
{
    this->_nbr = 0;
    this->_head = NULL;
}

int FruitBox::nbFruits(void) const
{
    return (this->_nbr);
}

bool FruitBox::putFruit(Fruit *f)
{
    FruitNode *temp = this->_head;
    FruitNode *new_node;

    if (f != nullptr) {
        if (this->_nbr < this->_size) {
            new_node = new FruitNode();
            if (this->_head == NULL) {
                new_node->_fruit = f;
                new_node->next = NULL;
                this->_head = new_node;
                this->_nbr += 1;
                return (true);
            }
            if (temp->_fruit == f)
                return (false);
            while (temp->next != NULL) {
                temp = temp->next;
                if (temp->_fruit == f)
                    return (false);
            }
            new_node->_fruit = f;
            new_node->next = NULL;
            temp->next = new_node;
            this->_nbr += 1;
            return (true);
        }
    }
    return (false);
}

Fruit *FruitBox::pickFruit(void)
{
    Fruit *ret;

    if (this->_head == NULL)
        return (NULL);
    ret = this->_head->_fruit;
    this->_head = this->_head->next;
    this->_nbr -= 1;
    return (ret);
}

FruitNode *FruitBox::head(void) const
{
    return (this->_head);
}