#include "push_swap.h"

void	ft_check_args(int argc, char *argv[])
{
	int	i;
	int	x;

	i = 1;
	while (i < argc)
	{
		x = 0;
		while (argv[i][x] != 0x0)
		{
			x += ft_skip_list(&argv[i][x], " ");
			if (argv[i][x] == 0x0)
				break ;
			if ((argv[i][x] == 0x2b) || (argv[i][x] == 0x2d))
				x++;
			if ((argv[i][x] > 0x2f) && (argv[i][x] < 0x3a))
			{
				x += ft_skip_list(&argv[i][x], "0123456789");
				if (argv[i][x] != 0x20 && argv[i][x] != 0x0)
					ft_exit();
			}
			else
				ft_exit();
		}
		i++;
	}
}