#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;
	int		count_args;
	int		*c;
	int		i;

	i = 0;
	if (argc > 1)
	{
		ft_check_args(argc, argv);
		count_args = ft_count_args(argc, argv);
		c = ft_args_to_int(argc, argv, count_args);
		while (i < count_args)
		{
			printf("args: %d\n", c[i]);
			i++;
		}
		/*ft_init_stack(argc, &a);
		ft_init_stack(argc, &b);
		ft_select_sort(&a, &b);*/
	}
}