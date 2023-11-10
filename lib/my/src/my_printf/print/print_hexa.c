/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** print_hexa.c
*/

#include "../../../../../include/my_printf.h"

int print_hexa(va_list ap, char specifier)
{
    int nbr = 0;
    int count = 0;

    if (specifier == 'x' || specifier == 'X')
        nbr = va_arg(ap, unsigned int);
    else
        nbr = va_arg(ap, unsigned long int);
    if (specifier == 'x')
        my_putnbr_base(nbr, "0123456789abcdef");
    else if (specifier == 'p')
        print_address((long long)va_arg(ap, long long));
    else
        my_putnbr_base(nbr, "0123456789ABCDEF");
    return count == 0 ? my_intlen(nbr) : count;
}
