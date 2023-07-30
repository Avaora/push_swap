#include "push_swap.h"

void	ft_arg_to_stack(int argc, char *argv[], t_stack *stack)
{
	while ((argc - 1) > 0)
	{
		stack->top++;
		stack->base[stack->top] = argv[argc - 1];
		argc--;
	}
}