##
## EPITECH PROJECT, 2023
## B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
## File description:
## Makefile
##

SRC = csfml.c
NAME = csfml
CFLAGS = -g3
OBJ = ${SRC:.c=.o}

all: ${NAME}

${NAME} : ${OBJ}
	make -C lib/my all
	gcc ${SRC} -o ${NAME} -L./lib/my -lmy

clean:
		make -C lib/my clean
		rm -f ${OBJ}
fclean: clean
	make -C lib/my fclean
	rm -f ${NAME}
re: fclean all
