#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;
	int		count_args;
	int		count_byte;
	char	*str;
	int		*c;
	int		i;

	i = 0;
	if (argc > 1)
	{
		ft_check(argc, argv);
		//count_byte = ft_count_byte(argc, argv);
		count_args = ft_count_args(argc, argv);
		c = ft_args_to_int(argc, argv, count_args);
		//str = ft_args_to_str(argc, argv, count_byte + count_args);
		while (i < count_args)
		{
			printf("args: %d\n", c[i]);
			i++;
		}
		/*ft_check_args(argc, argv);
		ft_init_stack(argc, &a);
		ft_init_stack(argc, &b);
		ft_arg_to_stack(argc, argv, &a);
		ft_select_sort(&a, &b);*/
	}
}