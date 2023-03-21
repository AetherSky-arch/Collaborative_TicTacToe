#include <stdio.h>
#include "tableau.h"

void	affichage(char tableau[11][11])
{
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			printf("[%c]", tableau[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

int	main(void)
{
	affichage(tableau);
}
