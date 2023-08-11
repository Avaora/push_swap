#include "push_swap.h"

int	ft_find_biggest(t_stack *stack)
{
	int	num;
	int	i;

	i = stack->top;
	num = stack->base[i];
	while (i > 0)
	{
		i--;
		if (num < stack->base[i])
			num = stack->base[i];
	}
	i = stack->top;
	while (i > -1)
	{
		if (num == stack->base[i])
			break ;
		i--;
	}
	return (i);
}