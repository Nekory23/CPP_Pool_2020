/*
** EPITECH PROJECT, 2021
** CppPool Rush3
** File description:
** display sfml
*/

#include "graphic.hpp"

void refresh_all_data(Data data)
{
    data.get_Uinfo().refreshInfos();
    data.get_Sinfo().refreshInfos();
    data.get_time().refreshInfos();
    data.get_RamInfos().refreshInfos();
}

void display_graphic(void) 
{
    Data data;
    Graphic g;
    sf::Time t = sf::seconds(1);
    
    while (g.win.isOpen()) {
        if (g.clock.getElapsedTime() > t) {
            refresh_all_data(data);
            g.win.clear(sf::Color::Black);
            draw_everything(g, data);
            g.win.display();
            g.clock.restart();
        }
        while (g.win.pollEvent(g.event)) {
            if (g.event.type == sf::Event::Closed)
                g.win.close();
        }
    }
}