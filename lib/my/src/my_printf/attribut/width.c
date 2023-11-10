/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** width.c
*/

#include "../../../../../include/my_printf.h"

int width(const char **format)
{
    int _width = 0;

    if (**format >= '1' && **format <= '9') {
        _width = my_getnbr(*format);
        while (my_isnum(**format))
            (*format)++;
    }
    return _width;
}
