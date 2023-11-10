/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-miniprintf-marin.lagie
** File description:
** my_isletter.c
*/

#include "../../include/my.h"

int my_isletter(char args)
{
    return my_isletter_islow(args) || my_isletter_isupper(args);
}
