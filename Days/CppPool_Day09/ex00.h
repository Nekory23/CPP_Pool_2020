/*
** EPITECH PROJECT, 2021
** CppPool Day09 ex00
** File description:
** ex00
*/

#ifndef _EX00_H_
#define _EX00_H_

typedef struct cthulhu_s {
    struct cthulhu_t *(*new_cthulhu)(void);
    void (*print_power)(struct cthulhu_t *);
    void (*attack)(struct cthulhu_t *);
    void (*sleeping)(struct cthulhu_t *);

    int m_power;
    char *m_name;
} cthulhu_t;

typedef struct koala_s {
    struct koala_t *(*new_koala)(char *, char);
    void (*eat)(struct koala_t *);

    cthulhu_t m_parent;
    char m_is_a_legend;
} koala_t;

cthulhu_t *new_cthulhu(void);
void print_power(cthulhu_t *);
void attack(cthulhu_t *);
void sleeping(cthulhu_t *);

koala_t *new_koala(char *, char);
void eat(koala_t *);

#endif
