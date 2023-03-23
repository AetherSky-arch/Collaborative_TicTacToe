NAME = morpion

OBJ = morpion.o affichage.o checkfor_draw.o jouer.o start.o

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

${OBJ}: tableau.h

$(NAME): ${OBJ}

clean:
	rm -f ${NAME} ${OBJ}
