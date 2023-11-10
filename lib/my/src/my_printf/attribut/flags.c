/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** flags.c
*/

#include "../../../../../include/my_printf.h"

int into_str(char *str, char ch)
{
    for (int i = 0; str[i] != 0; i++)
        if (str[i] == ch)
            return 1;
    return 0;
}

void swap_flags(char *_flags, int j)
{
    if (priority[_flags[j]] > priority[_flags[j + 1]])
        my_swap_char(&_flags[j], &_flags[j + 1]);
}

char *free_flags(char *flags)
{
    free(flags);
    return NULL;
}

char *flags(const char **format)
{
    char *_flags = malloc(5);
    int len_flags = 0;
    int profondeur_flags = 0;

    if (!isflags(**format))
        return free_flags(_flags);
    _flags[0] = '\0';
    while (isflags(**format)) {
        if (my_strlen(_flags) == 0 || !into_str(_flags, **format)) {
            profondeur_flags++;
            _flags[my_strlen(_flags)] = **format;
        }
        (*format)++;
    }
    _flags[profondeur_flags] = '\0';
    len_flags = my_strlen(_flags);
    for (int i = 0; i < len_flags - 1 && _flags[i] != 0; i++)
        for (int j = 0; j < len_flags - i - 1 && _flags[i] != 0; j++)
            swap_flags(_flags, j);
    return _flags;
}
