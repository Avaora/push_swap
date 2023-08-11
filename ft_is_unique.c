#include "push_swap.h"

void	ft_is_unique(t_stack *stack)
{
	int	num;
	int	i;

	num = stack->top;
	while (num > 0)
	{
		i = num - 1;
		while (i > -1)
		{
			if (stack->base[num] == stack->base[i])
				ft_exit(1, stack->base, NULL);
			i--;
		}
		num--;
	}
}