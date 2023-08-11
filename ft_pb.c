#include "push_swap.h"

void	ft_pb(t_stack *a, t_stack *b)
{
	if (a->top == -1)
		return ;
	b->top++;
	b->base[b->top] = a->base[a->top];
	a->top--;
	write(1, "pb\n", 3);
}