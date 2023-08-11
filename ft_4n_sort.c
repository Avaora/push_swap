#include "push_swap.h"

void	ft_4n_sort(t_stack *a, t_stack *b)
{
	int	num;

	num = ft_find_smallest(a);
	if (num == 3)
		ft_pb(a, b);
	else if ((num == 2) || (num == 1))
	{
		ft_ra(a);
		if (num == 1)
			ft_ra(a);
		ft_pb(a, b);
	}
	else if (num == 0)
	{
		ft_rra(a);
		ft_pb(a, b);
	}
	ft_3n_sort(a);
	ft_pa(b, a);
}