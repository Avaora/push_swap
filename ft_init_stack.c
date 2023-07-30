#include "push_swap.h"

void	ft_init_stack(int argc, t_stack *stack)
{
	stack->base = ft_zalloc(sizeof(*stack->base) * (argc - 1));
	stack->top = -1;
	stack->size = argc - 1;
}