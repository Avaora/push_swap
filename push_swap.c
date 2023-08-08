#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;
	int		count_args;
	int		count_byte;

	if (argc > 1)
	{
		count_byte = ft_count_byte(argc, argv);
		count_args = ft_count_args(argc, argv);
		printf("count_args: %d\ncount_byte: %d", count_args, count_byte);
		/*ft_args_to_str(argc, argv, count);
		ft_check_args(argc, argv);
		ft_init_stack(argc, &a);
		ft_init_stack(argc, &b);
		ft_arg_to_stack(argc, argv, &a);
		ft_select_sort(&a, &b);*/
	}
}