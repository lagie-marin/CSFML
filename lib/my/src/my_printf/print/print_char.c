/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** print_char.c
*/

#include "../../../../../include/my_printf.h"

int print_char(format_t *list, va_list ap)
{
    int val = 0;

    if (list->specifier == 'c') {
        val = (int)va_arg(ap, int);
        my_putchar(val);
        return my_intlen(val);
    }
    if (list->specifier == 's')
        my_putstr(va_arg(ap, char *));
    if (list->specifier == '%') {
        my_putchar('%');
        return 1;
    }
    if (list->specifier == 'n') {
        val = (int)va_arg(ap, int);
        my_put_nbr(val);
        return my_intlen(val);
    }
}
