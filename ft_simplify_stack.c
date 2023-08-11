#include "push_swap.h"

void	ft_simplify_stack(t_stack *stack, int *sorted)
{
	int	num;
	int	i;

	num = stack->top;
	while (num > -1)
	{
		i = 0;
		while (i < stack->size)
		{
			if (stack->base[num] == sorted[i])
			{
				stack->base[num] = i;
				break ;
			}
			i++;
		}
		num--;
	}
}