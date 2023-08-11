#include "push_swap.h"

int	*ft_args_to_int(int argc, char *argv[], int count)
{
	int	*stack;
	int	i;
	int	x;
	int	loc;

	stack = ft_zalloc(sizeof(*stack) * count);
	loc = count - 1;
	i = 1;
	while (i < argc)
	{
		x = 0;
		while (argv[i][x] != 0x0)
		{
			x += ft_skip_list(&argv[i][x], " ");
			if (argv[i][x] == 0x0)
				break ;
			stack[loc] = ft_atoi(&argv[i][x]);
			loc--;
			x += ft_skip_list(&argv[i][x], "-+0123456789");
		}
		i++;
	}
	return (stack);
}