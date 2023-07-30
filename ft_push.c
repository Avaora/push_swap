#include "push_swap.h"

void	ft_push(t_stack *src, t_stack *dst)
{
	if (src->top == -1)
		return ;
	dst->top++;
	dst->base[dst->top] = src->base[src->top];
	src->top--;
}