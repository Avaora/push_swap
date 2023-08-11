#include "push_swap.h"

void	ft_rrr(t_stack *a, t_stack *b)
{
	int	tmp;
	int	i;

	if ((a->top < 1) || (b->top < 1))
		return ;
	tmp = a->base[0];
	i = 0;
	while (i < a->top)
	{
		a->base[i] = a->base[i + 1];
		i++;
	}
	a->base[a->top] = tmp;
	tmp = b->base[0];
	i = 0;
	while (i < b->top)
	{
		b->base[i] = b->base[i + 1];
		i++;
	}
	b->base[b->top] = tmp;
}