/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday07-marin.lagie
** File description:
** my_str_islower.c
*/
#include "../../include/my.h"

int my_str_islower(char const *str)
{
    for (int i = 0; str[i] != 0; i++)
        if (!my_isletter_islow(str[i]))
            return 0;
    return 1;
}
