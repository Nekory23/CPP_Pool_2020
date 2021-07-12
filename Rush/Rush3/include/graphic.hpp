/*
** EPITECH PROJECT, 2021
** CppPool Rush3
** File description:
** display graphic
*/

#ifndef _GRAPHIC_
#define _GRAPHIC_

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

#include "data.hpp"

class Graphic {
public :
    Graphic() : win(sf::VideoMode(1200, 700), "My GKrellm") 
    {
        this->font.loadFromFile("./src/graphic/font/unispace_rg.ttf");
        this->bg_t.loadFromFile("./src/graphic/font/wp.jpg");
        this->bg.setTexture(this->bg_t);
    }
    ~Graphic() {}

    sf::RenderWindow win;
    sf::Event event;
    sf::Font font;
    sf::Text text;
    sf::Sprite bg;
    sf::Texture bg_t;
    sf::Clock clock;
    sf::Time time;
};

void display_graphic(void);
void draw_everything(Graphic &g, Data &data);

#endif