#include "push_swap.h"

void	ft_init_stacks(int count_args, t_stack *a, t_stack *b)
{
	b->base = ft_zalloc(sizeof(*b->base) * (count_args));
	b->top = count_args - 1;
	b->size = count_args;
	a->top = count_args - 1;
	a->size = count_args;
}