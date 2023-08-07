#include "push_swap.h"

void	ft_args_to_str(int argc, char *argv[], int count)
{
	char	*str;
	int		i;
	int		x;
	int		loc;

	i = 1;
	x = 0;
	loc = 0;
	str = ft_zalloc(count + 1);
	while (i < argc)
	{
		while (argv[i][x] != 0x0)
		{
			if ((argv[i][x] > 0x2f) && (argv[i][x] < 0x3a))
			{
				str[loc] = argv[i][x];
				loc++;
			}
			else if (argv[i][x] == )
		}
	}
}