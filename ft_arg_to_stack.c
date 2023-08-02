#include "push_swap.h"

void	ft_arg_to_stack(int argc, char *argv[], t_stack *stack)
{
	argc = argc - 1;
	while (argc > 0)
	{
		stack->top++;
		stack->base[stack->top] = argv[argc];
		argc--;
	}
}