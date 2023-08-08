#include "push_swap.h"

int	ft_count_byte(int argc, char *argv[])
{
	int count;
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
				
			else if (((argv[i][x] == 0x2b) || (argv[i][x] == 0x2d))
				&& ((argv[i][x + 1] > 0x2f) && (argv[i][x + 1] < 0x3a)))
				count++;
			else if ((argv[i][x] > 0x2f) && (argv[i][x] < 0x3a))
				count++;
			else
				ft_exit();
			x++;
		}
		i++;
	}
	return (count);
}