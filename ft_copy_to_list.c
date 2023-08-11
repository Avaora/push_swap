#include "push_swap.h"

void	ft_copy_to_list(t_stack *stack, int *lst)
{
	int	i;

	i = stack->top;
	while (i > -1)
	{
		lst[i] = stack->base[i];
		i--;
	}
}