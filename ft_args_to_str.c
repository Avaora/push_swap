#include "push_swap.h"

char	*ft_args_to_str(int argc, char *argv[], size_t count)
{
	char	*str;
	int		loc;
	int		i;
	int		x;

	str = ft_zalloc(count + 32);
	loc = 0;
	i = 1;
	while (i < argc)
	{
		x = 0;
		while (argv[i][x] != 0x0)
		{
			if (argv[i][x] == 0x20)
				ft_skip_list(&argv[i][x], " ");
			if (argv[i][x] == 0x2b || argv[i][x] == 0x2d)
				str[loc] = argv[i][x];
			else if (argv[i][x] > 0x2f && argv[i][x] < 0x3a)
				str[loc] = argv[i][x];
		}
		i++;
	}
	return (str);
}