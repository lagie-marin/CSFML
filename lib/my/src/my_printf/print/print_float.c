/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** print_float.c
*/

#include "../../../../../include/my_printf.h"
#include <stdio.h>

void sign(double *value, char **p)
{
    if (*value < 0) {
        **p = '-';
        (*p)++;
        *value = -(*value);
    }
}

void integer_part(double *value, char **p)
{
    long long integer_part = (long long)*value;

    **p = '0' + integer_part;
    (*p)++;
    *value -= integer_part;
}

void precisions(double *value, char **p, int precision, char *buffer_end)
{
    int digit;
    double rounding_factor = 0.5;

    if (precision > 0 && *p < buffer_end - 1) {
        **p = '.';
        (*p)++;
    }
    for (int i = 0; i < precision && *p < buffer_end - 1; i++) {
        *value *= 10.0;
        digit = (int)(*value + rounding_factor);
        **p = '0' + digit;
        (*p)++;
        *value -= digit;
        rounding_factor *= 0.1;
    }
}

int print_float(format_t *list, double value)
{
    int precision = 0;
    char buffer[50];
    char *p = buffer;

    if (list->precision == -1)
        precision = 6;
    else if (list->precision == 0)
        precision = 0;
    else
        precision = list->precision;
    sign(&value, &p);
    integer_part(&value, &p);
    if (precision > 0) {
        precisions(&value, &p, precision, buffer + sizeof(buffer) - 1);
    }
    *p = '\0';
    write(1, buffer, my_strlen(buffer));
    return my_strlen(buffer);
}
