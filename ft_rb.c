#include "push_swap.h"

void	ft_rb(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->top < 1)
		return ;
	tmp = stack->base[stack->top];
	i = stack->top;
	while (i > 0)
	{
		stack->base[i] = stack->base[i - 1];
		i--;
	}
	stack->base[0] = tmp;
	write(1, "rb\n", 3);
}