#include "tableau.h"

void	affichage(char tableau[11][11]);
int	checkfor_draw(char tableau[11][11]);
int	jouer(char tableau[11][11], int joueur);
int	start(void);

int	main(void)
{
	int	player;
	char	tableau[11][11] = {
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}
	};

	player = start();
	while (checkfor_draw(tableau) == 0)
	{
		affichage(tableau);
		jouer(tableau, player);
		if (player == 0)
			player = 1;
		else
			player = 0;
	}
	return (0);
}
