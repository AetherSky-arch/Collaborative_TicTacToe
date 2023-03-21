#include "tableau.h"

int	checkfor_draw(char tableau[11][11])
{
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (tableau[i][j] == '.')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
