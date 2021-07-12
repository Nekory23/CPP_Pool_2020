/*
** EPITECH PROJECT, 2021
** Cpp_Pool Day01 ex02
** File description:
** bitmap_header.c
*/

#include "bitmap.h"

void make_bmp_header(bmp_header_t *header, size_t size)
{
    uint32_t temp = sizeof(bmp_info_header_t) + sizeof(bmp_header_t);

    header->magic = 0x4D42;
    header->size = (size * size * 4) + temp;
    header->_app1 = 0;
    header->_app2 = 0;
    header->offset = temp;
}

void make_bmp_info_header(bmp_info_header_t *header, size_t size)
{
    header->size = 40;
    header->width = size;
    header->height = size;
    header->planes = 1;
    header->bpp = 32;
    header->compression = 0;
    header->raw_data_size = size * size * 4;
    header->h_resolution = 0;
    header->v_resolution = 0;
    header->palette_size = 0;
    header->important_colors = 0;
}
