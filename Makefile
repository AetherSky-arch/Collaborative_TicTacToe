NAME = morpion

SRCS = main.c affichage.c checkfor_draw.c tableau.h

CC = gcc

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
