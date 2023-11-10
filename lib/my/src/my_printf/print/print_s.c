/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** print_s.c
*/

#include "../../../../../include/my_printf.h"

int print_s(format_t *list, va_list ap)
{
    char *str = va_arg(ap, char *);

    if (str == NULL) {
        my_putstr("(null)");
        return 6;
    }
    my_putstr(str);
    return my_strlen(str);
}
