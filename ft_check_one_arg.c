#include "push_swap.h"

void	ft_check_one_arg(char argv[])
{
	int	x;

	x = 0;
	while (argv[x] != 0x0)
	{
		x += ft_skip_list(&argv[x], " ");
		if ((argv[x] == 0x2b) || (argv[x] == 0x2d))
			x++;
		if ((argv[x] > 0x2f) && (argv[x] < 0x3a))
		{
			x += ft_skip_list(&argv[x], "0123456789");
			if (argv[x] != 0x20 && argv[x] != 0x0)
				ft_exit();
			x += ft_skip_list(&argv[x], " ");
		}
		else
			ft_exit();
	}
	if (x == 0)
		ft_exit();
}