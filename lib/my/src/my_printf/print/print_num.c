/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** print_num.c
*/

#include "../../../../../include/my_printf.h"

int print_nbr_base_unsigned(unsigned int nbr, char specifier)
{
    char *base = malloc(8);
    char *str;
    int count;

    if (specifier == 'o')
        base = "01234567";
    if (specifier == 'b')
        base = "01";
    my_putnbr_base(nbr, base);
    str = my_getnbr_base(nbr, base);
    count = my_strlen(str);
    return count;
}

int my_put_nbr_unsigned(unsigned int n)
{
    my_put_nbr(n);
    return my_intlen(n);
}

int print_num(format_t *list, va_list ap)
{
    char specifier = list->specifier;
    int val = 0;

    if (specifier == 'd' || specifier == 'i'){
        val = (int)va_arg(ap, int);
        my_put_nbr(val);
        return my_intlen(val);
    }
    if (specifier == 'u')
        return my_put_nbr_unsigned(va_arg(ap, unsigned int));
    if (specifier == 'x' || specifier == 'X' || specifier == 'p')
        return print_hexa(ap, specifier);
    if (specifier == 'o' || specifier == 'b') {
        return print_nbr_base_unsigned(va_arg(ap, unsigned int), specifier);
    }
    if (specifier == 'e' || specifier == 'E')
        return print_scientific(list, ap);
    if (specifier == 'f' || specifier == 'F')
        return print_float(list, (double)va_arg(ap, double));
}
