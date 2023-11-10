/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** my_itoa.c
*/

#include "../../include/my.h"

void my_itoa(int value, char *buffer)
{
    char *p = buffer;
    int i = 0;
    int j;

    if (value == 0) {
        *p++ = '0';
    } else {
        while (value != 0) {
            *p++ = '0' + (value % 10);
            value /= 10;
        }
    }
    *p = '\0';
    j = p - buffer - 1;
    while (i < j) {
        my_swap_char(buffer + i, buffer + j);
        i++;
        j--;
    }
}
