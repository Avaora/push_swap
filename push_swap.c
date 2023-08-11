#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;
	int		count_args;

	if (argc > 1)
	{
		ft_check_args(argc, argv);
		count_args = ft_count_args(argc, argv);
		a.base = ft_args_to_int(argc, argv, count_args);
		ft_init_stacks(count_args, &a, &b);
		ft_is_unique(&a);
		if (ft_is_ascending(&a) == 0)
			ft_exit(0, a.base, b.base);
		ft_select_algo(&a, &b);
		ft_exit(0, a.base, b.base);
	}
	return (0);
}