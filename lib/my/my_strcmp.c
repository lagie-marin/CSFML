/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday06-marin.lagie
** File description:
** my_strcmp.c
*/
#include "../../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    for (int x = 0; s1[x] != '\n'; x++) {
        if (*s1 > *s2)
            return 1;
        if (*s1 < *s2)
            return -1;
    }
    return 0;
}
