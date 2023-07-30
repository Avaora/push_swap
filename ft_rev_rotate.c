#include "push_swap.h"

void	ft_rev_rotate(t_stack *stack)
{
	int	tmp;
	int	i;

	tmp = stack->base[0];
	i = 0;
	while (i < stack->top)
	{
		stack->base[i] = stack->base[i + 1];
		i++;
	}
	stack->base[stack->top] = tmp;
}