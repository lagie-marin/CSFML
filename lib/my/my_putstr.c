/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday04-marin.lagie
** File description:
** my_putstr.c
*/
#include "../../include/my.h"

int my_putstr(char const *str)
{
    if (!str)
        return (0);
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return (0);
}
