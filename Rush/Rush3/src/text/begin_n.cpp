/*
** EPITECH PROJECT, 2021
** CppPool Rush3
** File description:
** display ncurses
*/

#include "infos.hpp"
#include "text.hpp"
#include <unistd.h>

void ncurses_couleurs() 
{
    start_color();

    init_pair(1, COLOR_YELLOW, COLOR_BLACK);
    init_pair(2, COLOR_RED, COLOR_BLACK);
    init_pair(3, COLOR_MAGENTA, COLOR_BLACK);
}

void print(UserInfo infos, DateTime date, SystemInfo sys, CPUinfos cpu, RamInfo ram)
{
    attron(A_UNDERLINE | A_BOLD | COLOR_PAIR(1));
    mvprintw(6.5, (COLS / 2)-1, "WELCOME !");
    attroff(A_BOLD | COLOR_PAIR(1));
    attron(A_UNDERLINE | A_BOLD);
    mvprintw((LINES / 11), (COLS / 7) - 15, "UserName :");
    attroff(A_BOLD);
    mvprintw((LINES / 11), (COLS / 7), infos.getUserName().c_str());
    attron(A_UNDERLINE | A_BOLD);
    mvprintw((LINES / 11) + 4, (COLS / 7) - 15, "HostName :");
    attroff(A_BOLD);
    mvprintw((LINES / 11) + 4, (COLS / 7), infos.getHostName().c_str());
    attron(A_BOLD);
    mvprintw((LINES / 11) + 2,  +175 , date.getTime().c_str()); // modify later
    attroff(A_BOLD);

    attron(A_BOLD);
    mvprintw((LINES / 2) -5 , +15, "Kernel Version :");
    attroff(A_BOLD);
    mvprintw((LINES / 2) -5 , +50, sys.getKernelVersion().c_str());
    attron(A_BOLD);
    mvprintw((LINES / 2) - 2, +15, "Opérating System :");
    attroff(A_BOLD);
    mvprintw((LINES / 2) - 2, +50, sys.getOpSystem().c_str());

    attron(A_BOLD);
    mvprintw((LINES / 2) +2, +15, "CPU :");
    attroff(A_BOLD);
    mvprintw((LINES / 2) +2, +50, "%s %", cpu.getPercent().c_str());
    attron(A_BOLD);
    mvprintw((LINES / 2) + 6, +15, "RAM :");
    attroff(A_BOLD);
    mvprintw((LINES / 2) + 6, +50, "%d GB", ram.get_memTotal());
    attron(A_BOLD);
    mvprintw((LINES / 2) + 10, +15, "Memomry free :");
    attroff(A_BOLD);
    mvprintw((LINES / 2) + 10, +50, "%d MB", ram.get_memFree());
    for (int i = 0, print = 8; i < cpu.getSizeMhz(); i++, print = print + 4)
        {
            attron(A_BOLD);
            mvprintw((LINES /2) -15 + print, (COLS / 2) + 40, "PROCESSOR %d :", i);
            attroff(A_BOLD);
            mvprintw((LINES / 2) -15 + print, (COLS / 2) + 63, cpu.getMhz(i).c_str());  
        }
}


void display_text(void) 
{
    UserInfo infos;
    DateTime date;
    SystemInfo sys;
    int key;
    CPUinfos cpu;
    WINDOW *haut, *boite;
    RamInfo ram;

    initscr();
    ncurses_couleurs();
    while (1) {
        clear();
        boite= subwin(stdscr, 5, 20, 4, COLS /2 -6.5);
        wborder(boite, '|', '|', '-', '-', '+', '+', '+', '+');
        wrefresh(boite);
        haut= subwin(stdscr, LINES / 4, COLS, 0, 0);
        box(haut, ACS_VLINE, ACS_HLINE);
        wbkgd(haut, COLOR_PAIR(3));
        wrefresh(haut);
        print(infos, date, sys, cpu, ram);
        refresh();
        wrefresh(haut);
        date.refreshInfos();
        timeout(1000);
        key = getch();
        if (key == ECHAP)
            break;
    }
    endwin();
}
