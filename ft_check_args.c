#include "push_swap.h"

void	ft_check_args(int argc, char *argv[])
{
	int	i;
	int	x;

	i = 1;
	x = 0;
	while (i < argc)
	{
		while (argv[i][x] != 0x0)
		{
			if ((argv[i][x] == 0x2d) || (argv[i][x] == 0x2b))
			{
				if ((argv[i][x + 1] < 0x30) || (argv[i][x + 1] > 0x39))
					ft_exit("Error");
			}
			else if ((argv[i][x] < 0x30) || (argv[i][x] > 0x39))
				ft_exit("Error");
			x++;
		}
		i++;
	}
}