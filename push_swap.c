#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;

	if (argc > 2)
	{
		ft_check_args(argc, argv);
		ft_init_stack(argc, &a);
		ft_init_stack(argc, &b);
		ft_arg_to_stack(argc, argv, &a);
		ft_select_sort(&a, &b);
	}
}