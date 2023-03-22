#include "tableau.h"
#include <stdio.h>

int	jouer(char tableau[11][11], int player)
{
	int	bool;
	int	i;
	int	j;

	bool = 0;
	while (bool != 1)
	{
		printf("Entrez une colonne\n");
		scanf("%d", &i);
		printf("Entrez une ligne\n");
		scanf("%d", &j);
		if (tableau[i][j] == '.')
		{
			if (player == 1)
				tableau[i][j] = 'X';
			else
				tableau[i][j] = 'O';
			bool = 1;
		}
	}
	return (0);
}
