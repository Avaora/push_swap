#include "push_swap.h"

int	ft_count_args(int argc, char *argv[])
{
	int	count;
	int	i;
	int	x;

	count = 0;
	i = 1;
	while (i < argc)
	{
		x = 0;
		while (argv[i][x] != 0x0)
		{
			if (argv[i][x] == 0x20)
				x += ft_skip_list(&argv[i][x], " ");
			else if ((argv[i][x] == 0x2b) || (argv[i][x] == 0x2d))
				x += ft_skip_list(&argv[i][x], "+-");
			else if ((argv[i][x] > 0x2f) && (argv[i][x] < 0x3a))
			{
				count++;
				x += ft_skip_list(&argv[i][x], "0123456789");
			}
			else
				ft_exit();
		}
		i++;
	}
	return (count);
}