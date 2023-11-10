/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday07-marin.lagie
** File description:
** ../../include/my.h
*/
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#ifndef MY
    #define MY
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int my_putnbr_base(int nbr, char *base);
char *my_revstr(char *dest, char const *src);
int my_showmem(void);
int my_showstr(void);
void my_sort_int_array(int *array, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(void);
int my_str_isprintable(void);
int my_str_isupper(void);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
int my_strlowcase(void);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
int my_strupcase(void);
void my_swap(int *a, int *b);
int is_smaller(int this, int *array, int size);
int my_sqrt(int start, int nb);
int search(int i, int nb);
int my_show_word_array(char *const *tab);
char **my_str_to_word_array(const char *str);
char *my_strdup(char const *src);
int my_isletter_islow(char args);
int my_isletter_isupper(char args);
int my_isletter(char args);
int my_intlen(int value);
int my_isnum(int i);
void my_put_float(float value);
void my_swap_char(char *a, char *b);
void my_itoa(int value, char *buffer);
int my_putnbr_base_long(long nbr, char *base);
int my_printf(const char *format, ...);
int ch_into_str(char *str, char ch);
#endif
