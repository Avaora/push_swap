#include "push_swap.h"

int	ft_is_ascending(t_stack *stack)
{
	int	tmp;

	tmp = stack->top;
	while (tmp > 0)
	{
		if (stack->base[tmp] > stack->base[tmp - 1])
			return (1);
		tmp--;
	}
	return (0);
}