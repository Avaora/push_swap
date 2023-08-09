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
			x += ft_skip_list(&argv[i][x], " ");
			if (argv[i][x] == 0x0)
				break ;
			count++;
			x += ft_skip_list(&argv[i][x], "-+0123456789");
		}
		i++;
	}
	if (count == 0)
		ft_exit();
	return (count);
}