/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday09-marin.lagie
** File description:
** my_str_to_word_array.c
*/

#include "../../include/my.h"

int is_charac(char c, int status)
{
    if (status == 1 && c >= 33 && c <= 126)
            return 1;
    if (status == 2 && c >= 33 && c <= 126 && c != 58)
            return 1;
    return 0;
}

int word_count(const char *c)
{
    int count = 0;
    int i = 0;

    while (c[i] != '\0') {
        while (c[i] == ' ' && c[i] != '\0')
            i++;
        if (c[i] != '\0')
            count++;
        while (c[i] != ' ' && c[i] != '\0')
            i++;
    }
    return count;
}

int len_word(const char *str, int i)
{
    int x = i;

    while (is_charac(str[x], 1) == 1)
        x++;
    return x - i;
}

char **my_str_to_word_array(const char *str)
{
    char **word_array = malloc(sizeof(char *) * (word_count(str) + 1));
    int pos_str = 0;
    int pos_tab = 0;
    int word_len;

    while (pos_tab < word_count(str)) {
        while (str[pos_str] == ' ' && str[pos_str] != '\0')
            pos_str++;
        word_len = 0;
        while (is_charac(str[pos_str], 1) == 1) {
            word_len++;
            pos_str++;
        }
        word_array[pos_tab] = malloc(sizeof(char) * (word_len + 1));
        for (int i = 0; i < word_len; i++)
            word_array[pos_tab][i] = str[pos_str - word_len + i];
        word_array[pos_tab][word_len] = '\0';
        pos_tab++;
    }
    return word_array;
}
