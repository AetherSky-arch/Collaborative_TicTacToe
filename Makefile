NAME = morpion

SRCS = main.c affichage.c checkfor_draw.c tableau.h

CC = gcc

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRCS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
