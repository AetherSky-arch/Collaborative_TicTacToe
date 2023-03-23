#include "tableau.h"

int	start(void)
{
	int	player;

	srand(getpid());
	player = rand() % 2;
	return (player);
}
