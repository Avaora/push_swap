#include "push_swap.h"

void	ft_sa(t_stack *stack)
{
	int	tmp;

	if (stack->top < 1)
		return ;
	tmp = stack->base[stack->top];
	stack->base[stack->top] = stack->base[stack->top - 1];
	stack->base[stack->top - 1] = tmp;
	write(1, "sa\n", 3);
}