#include "push_swap.h"

void	ft_is_only_sdmp(int argc, char **argv)
{
	int	i;
	int	x;

	i = 1;
	while (i < argc)
	{
		x = 0;
		while (argv[i][x] != 0x0)
		{
			if (argv[i][x] == 0x20)
				x++;
			else if ((argv[i][x] > 0x2f) && (argv[i][x] < 0x3a))
				x++;
			else if (((argv[i][x] == 0x2b) || (argv[i][x] == 0x2d))
				&& ((argv[i][x + 1] > 0x2f) && (argv[i][x + 1] < 0x3a)))
				x++;
			else
				ft_exit();
		}
		i++;
	}
}