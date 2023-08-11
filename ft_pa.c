#include "push_swap.h"

void	ft_pa(t_stack *b, t_stack *a)
{
	if (b->top == -1)
		return ;
	a->top++;
	a->base[a->top] = b->base[b->top];
	b->top--;
	write(1, "pa\n", 3);
}