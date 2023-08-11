#include "push_swap.h"

void	ft_exit(int flag, void *mem1, void* mem2)
{
	int	i;

	i = 0;
	if (flag == 1)
		write(2, "Error\n", 6);
	if (mem1 != NULL)
		free(mem1);
	if (mem2 != NULL)
		free(mem2);
	if (flag == 1)
		exit(1);
	exit(0);
}