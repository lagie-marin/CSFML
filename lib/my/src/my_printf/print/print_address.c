/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** print_address.c
*/

#include "../../../../../include/my_printf.h"

int print_address(long long n)
{
    if ((void *) n == NULL)
        my_putstr("(nil)");
    else {
        my_putstr("0x");
        my_putnbr_base_long(n, "0123456789abcdef");
    }
    return (void *) n == NULL ? 5 : my_intlen(n) + 2;
}
