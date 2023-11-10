/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** print_scientific.c
*/

#include "../../../../../include/my_printf.h"

int print_scientific(format_t *list, va_list ap)
{
    double decimal = va_arg(ap, double);
    int puissance = 0;
    int count_char = 0;

    while (!(decimal < 10 && decimal > -10)) {
        decimal /= 10;
        puissance++;
    }
    count_char = print_float(list, decimal);
    my_putchar(list->specifier);
    my_putchar('+');
    if (my_intlen(puissance) < 2)
        my_putchar('0');
    my_put_nbr(puissance);
    return count_char + my_strlen(list->flags) + 3;
}
