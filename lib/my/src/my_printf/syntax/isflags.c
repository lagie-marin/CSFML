/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** isflags.c
*/

#include "../../../../../include/my_printf.h"

int isflags(char ch)
{
    return ch == '#' || ch == '0' || ch == '-' || ch == '+';
}
