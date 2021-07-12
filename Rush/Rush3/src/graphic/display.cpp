/*
** EPITECH PROJECT, 2021
** CppPool Rush3
** File description:
** display graphic
*/

#include "graphic.hpp"

void draw_boxes(Graphic &g)
{
    // create rectangles
    sf::RectangleShape rect(sf::Vector2f(1200, 100));
    rect.setFillColor(sf::Color::Transparent);
    rect.setOutlineColor(sf::Color::Blue);
    rect.setOutlineThickness(3);
    sf::RectangleShape rect1(rect);
    rect1.setSize(sf::Vector2f(600, 700));
    sf::RectangleShape rect2(rect1);

    // set positions
    rect.setPosition(0, 0);
    rect1.setPosition(0, 100);
    rect2.setPosition(600, 100);

    // display
    g.win.draw(rect);
    g.win.draw(rect1);
    g.win.draw(rect2);
}

void draw_everything(Graphic &g, Data &data)
{
    int arraySize = 0;

    g.win.draw(g.bg);
    draw_boxes(g);
    g.text.setFont(g.font);
    g.text.setCharacterSize(20);

    // username and hostname
    g.text.setString("User name : " + data.get_Uinfo().getUserName());
    g.text.setPosition(20, 15);
    g.win.draw(g.text);
    g.text.setString("Host name : " + data.get_Uinfo().getHostName());
    g.text.setPosition(20, 45);
    g.win.draw(g.text);

    // date and time
    g.text.setString(data.get_time().getTime());
    g.text.setPosition(900, 30);
    g.win.draw(g.text);

    // kernel version and OS
    g.text.setString("Kernel version : " + data.get_Sinfo().getKernelVersion());
    g.text.setPosition(20, 150);
    g.win.draw(g.text);
    g.text.setString("Operating system : " + data.get_Sinfo().getOpSystem());
    g.text.setPosition(20, 200);
    g.win.draw(g.text);

    // CPU details
    g.text.setString("CPU : " + data.get_CPUinfo().getPercent() + " %");
    g.text.setPosition(20, 300);
    g.win.draw(g.text);
    g.text.setString("Number of cores : " + data.get_CPUinfo().getCore());
    g.text.setPosition(20, 350);
    arraySize = data.get_CPUinfo().getSizeMhz();
    for (int i = 0, z = 150; i != arraySize; i++, z += 50) {
        g.text.setString("Processor " + std::to_string(i) + " : " + data.get_CPUinfo().getMhz(i));
        g.text.setPosition(620, z);
        g.win.draw(g.text);
    }

    // RAM
    if (data.get_RamInfos().get_memTotal() <= 999)
        g.text.setString("RAM : " + std::to_string(data.get_RamInfos().get_memTotal()) + " GB");
    else
        g.text.setString("RAM : " + std::to_string(data.get_RamInfos().get_memTotal()) + " MB");
    g.text.setPosition(20, 500);
    g.win.draw(g.text);
    g.text.setString("Memory free : " + std::to_string(data.get_RamInfos().get_memFree()) + " MB");
    g.text.setPosition(20, 550);
    g.win.draw(g.text);
    g.text.setString("Memory available : " + std::to_string(data.get_RamInfos().get_memAvail()) + " MB");
    g.text.setPosition(20, 600);
    g.win.draw(g.text);
}