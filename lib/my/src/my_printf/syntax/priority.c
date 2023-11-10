/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** priority.c
*/

#include "../../../../../include/my_printf.h"

priority_f priority[256] = {
    ['+'] = 0,
    ['-'] = 1,
    ['0'] = 2,
    ['#'] = 3
};
