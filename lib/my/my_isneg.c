/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday03-marin.lagie
** File description:
** my_isneg.c
*/
#include "../../include/my.h"

int my_isneg(int nb)
{
    if (nb < 0)
        my_putchar('N');
    else
        my_putchar('P');
    return 0;
}
