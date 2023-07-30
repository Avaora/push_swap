#include "push_swap.h"

void	ft_rotate(t_stack *stack)
{
	int	tmp;
	int	i;

	tmp = stack->base[stack->top];
	i = stack->top;
	while (i > 0)
	{
		stack->base[i] = stack->base[i - 1];
		i--;
	}
	stack->base[0] = tmp;
}