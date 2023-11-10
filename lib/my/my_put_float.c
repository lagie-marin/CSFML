/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-rush2-marin.lagie
** File description:
** my_put_float.c
*/

#include "../../include/my.h"

void my_put_float(float value)
{
    int int_val = (int)value;
    int after_val = (int)((value - int_val) * 1000);

    after_val = after_val % 10 == 0 ? after_val / 10 : (after_val + 1) / 10;
    my_put_nbr(int_val);
    my_putchar('.');
    if (after_val >= 0 && after_val <= 9)
        my_putchar('0');
    if (after_val < 0)
        after_val *= -1;
    my_put_nbr(after_val);
}
