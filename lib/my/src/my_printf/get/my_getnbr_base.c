/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** my_getnbr_base.c
*/

#include "../../../../../include/my_printf.h"

char *my_getnbr_base(int nbr, char const *base)
{
    int base_len = my_strlen(base);
    char *str = malloc(33);
    char *p = str + 32;

    if (nbr < 0)
        nbr = -nbr;
    *p = '\0';
    while (nbr != 0) {
        *--p = base[nbr % base_len];
        nbr /= base_len;
    }
    if (nbr < 0) {
        p--;
        *--p = '-';
    }
    return p;
}
