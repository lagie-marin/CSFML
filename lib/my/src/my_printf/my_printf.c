/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** my_printf.c
*/

#include "../../../../include/my_printf.h"

format_t *format_detail(const char **format)
{
    format_t *new_list = NULL;

    new_list = malloc(sizeof(format_t));
    if (new_list == NULL) {
        return new_list;
    }
    new_list->flags = flags(format);
    new_list->width = width(format);
    new_list->precision = precision(format);
    new_list->specifier = **format;
    return new_list;
}

int dispatch_specifier(format_t *list, va_list ap)
{
    char c = list->specifier;

    if (c == 'c' || c == 's' || c == '%' || c == 'n')
        return print_char(list, ap);
    return print_num(list, ap);
}

void my_free(char *flags, format_t *list)
{
    if (flags != NULL)
        free(flags);
    free(list);
}

int my_printf(const char *format, ...)
{
    va_list ap;
    format_t *list = NULL;
    int count = 0;

    va_start(ap, format);
    while (*format) {
        if (*format == '%') {
            format++;
            list = format_detail(&format);
            count = dispatch_specifier(list, ap);
        } else {
            my_putchar(*format);
            count++;
        }
        format++;
    }
    my_free(list->flags, list);
    va_end(ap);
    return count;
}
