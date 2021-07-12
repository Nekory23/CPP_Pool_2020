/*
** EPITECH PROJECT, 2021
** Cpp_Pool Day03
** File description:
** string.h
*/

#ifndef _STRING_H_
#define _STRING_H_

#include <string.h>
#include <stddef.h>

typedef struct string_t {
    char *str;
    void (*assign_s)(struct string_t *, struct string_t const *);
    void (*assign_c)(struct string_t *, const char *);
    void (*append_c)(struct string_t *, const char *);
    void (*append_s)(struct string_t *, struct string_t const *);
    char (*at)(struct string_t const *this, size_t pos);
    void (*clear)(struct string_t *);
    int (*size)(struct string_t const *);
    int (*compare_c)(struct string_t const *, const char *);
    int (*compare_s)(struct string_t const *, struct string_t const *);
    size_t (*copy)(struct string_t const *, char *, size_t n, size_t pos);
    const char *(*c_str)(struct string_t const *);
    int (*empty)(struct string_t const *);
    int (*find_c)(struct string_t const *, const char *, size_t pos);
    int (*find_s)(struct string_t const *, struct string_t const *, size_t pos);
    void (*insert_c)(struct string_t *, size_t pos, const char *);
    void (*insert_s)(struct string_t *, size_t pos, struct string_t const *);
    int (*to_int)(struct string_t const *);
} string_t;

void string_init(string_t *, const char *);
void string_destroy(string_t *);
void assign_c(string_t *, const char *);
void assign_s(string_t *, const string_t *);
void append_c(string_t *, const char *);
void append_s(string_t *, const string_t *);
char at(const string_t *, size_t);
void clear(string_t *);
int size(const string_t *);
int compare_c(const string_t *, const char *);
int compare_s(const string_t *, const string_t *);
size_t copy(const string_t *, char *, size_t, size_t);
const char *c_str(const string_t *);
int empty(const string_t *);
int find_c(const string_t *, const char *, size_t);
int find_s(const string_t *, const string_t *, size_t);
void insert_c(string_t *, size_t, const char *);
void insert_s(string_t *, size_t, const string_t *);
int to_int(const string_t *);

#endif
