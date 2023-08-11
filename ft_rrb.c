#include "push_swap.h"

void	ft_rrb(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->top < 1)
		return ;
	tmp = stack->base[0];
	i = 0;
	while (i < stack->top)
	{
		stack->base[i] = stack->base[i + 1];
		i++;
	}
	stack->base[stack->top] = tmp;
	write(1, "rrb\n", 4);
}