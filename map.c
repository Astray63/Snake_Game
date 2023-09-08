#include "ft.h"

int	**ft_map(void)
{
	int	i;
	int	j;
	int	**map;

	map = (int **)malloc(LENGHT * sizeof(int *));
	for(i = 0; i < LENGHT; i++)
	{
		 map[i] = (int *)malloc(LENGHT * sizeof(int));
		for(j = 0; j < LENGHT; j++)
		{
			if ( i == 0 || j == 0 || i == LENGHT - 1 || j == LENGHT - 1)
				map[i][j] = (-1);
			else 
				map[i][j] = 0;
		}
	}
	return (map);
}

void	ft_print_map(void)
{
	int	**map = ft_map();

	for(int i = 0; i < LENGHT; i++)
	{
		for(int j = 0; j < LENGHT; j++)
		{
			if(map[i][j] == 0)
				printf(" %d ", map[i][j]);
			else
				printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	free(map);
	return (0);
}
