#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;

	if (argc > 1)
	{
		ft_check_args(argc, argv);
		ft_init_stack(argc, &a);
		ft_init_stack(argc, &b);
		ft_arg_to_stack(argv, &a);
	}
}