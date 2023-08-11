#include "push_swap.h"

void	ft_rr(t_stack *a, t_stack *b)
{
	int	tmp;
	int	i;

	if ((a->top < 1) || (b->top < 1))
		return ;
	tmp = a->base[a->top];
	i = a->top;
	while (i > 0)
	{
		a->base[i] = a->base[i - 1];
		i--;
	}
	a->base[0] = tmp;
	tmp = b->base[b->top];
	i = b->top;
	while (i > 0)
	{
		b->base[i] = b->base[i - 1];
		i--;
	}
	b->base[0] = tmp;
	write(1, "rr\n", 4);
}