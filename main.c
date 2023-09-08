#include "ft.h"

int	main(void)
{
	int	**map = ft_map();

	for(int i = 0; i < LENGHT; i++)
	{
		for(int j = 0; j < LENGHT; j++)
		{
			printf("%d", map[i][j]);
		}
		printf("\n");
	}
	free(map);
	return (0);
}
