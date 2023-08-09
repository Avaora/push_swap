#include "push_swap.h"

void	ft_check_args(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_check_one_arg(argv[i]);
		i++;
	}
}