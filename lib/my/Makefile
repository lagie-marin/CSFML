##
## EPITECH PROJECT, 2023
## B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
## File description:
## Makefile
##

SRC = ch_into_str.c \
	is_smaller.c \
	my_compute_power_rec.c \
	my_compute_square_root.c \
	my_find_prime_sup.c \
	my_getnbr.c \
	my_intlen.c \
	my_is_prime.c \
	my_isletter_islow.c \
	my_isletter_isupper.c \
	my_isletter.c \
	my_isneg.c \
	my_put_nbr.c \
	my_put_float.c \
	my_putchar.c \
	my_putnbr_base.c \
	my_putstr.c \
	my_revstr.c \
	my_show_word_array.c \
	my_showmem.c \
	my_showstr.c \
	my_sort_int_array.c \
	my_sqrt.c \
	my_str_isalpha.c \
	my_str_islower.c \
	my_str_isnum.c \
	my_str_isprintable.c \
	my_str_isupper.c \
	my_str_to_word_array.c \
	my_strcapitalize.c \
	my_strcat.c \
	my_strcmp.c \
	my_strcpy.c \
	my_strdup.c \
	my_strlen.c \
	my_strlowcase.c \
	my_strncat.c \
	my_strncmp.c \
	my_strncpy.c \
	my_strstr.c \
	my_strupcase.c \
	my_swap.c \
	my_swap_str.c \
	search.c \
	my_itoa.c \
	my_isnum.c \
	my_putnbr_base_long.c \
	src/my_printf/print/print_char.c \
	src/my_printf/print/print_num.c \
	src/my_printf/print/print_scientific.c \
	src/my_printf/print/print_float.c \
	src/my_printf/print/print_hexa.c \
	src/my_printf/print/print_address.c \
	src/my_printf/print/print_s.c \
	src/my_printf/print/print_ll.c \
	src/my_printf/syntax/isflags.c \
	src/my_printf/syntax/priority.c \
	src/my_printf/attribut/precision.c \
	src/my_printf/attribut/width.c \
	src/my_printf/attribut/flags.c\
	src/my_printf/get/my_getnbr_base.c \
	src/my_printf/my_printf.c \

OBJ = ${SRC:.c=.o}
CFLAGS = -g3
NAME = libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)


clean:
	rm -f ${OBJ}
fclean: clean
	rm -f ${NAME}
re: fclean all
