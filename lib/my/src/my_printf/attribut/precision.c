/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** precision.c
*/

#include "../../../../../include/my_printf.h"

int precision(const char **format)
{
    int _precision = -1;

    if (**format == '.') {
        (*format)++;
        _precision = my_getnbr(*format);
        while (my_isnum(**format))
            (*format)++;
    }
    return _precision;
}
