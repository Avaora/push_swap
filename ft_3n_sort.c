#include "push_swap.h"

void	ft_3n_sort(t_stack *a)
{
	int	num;

	num = ft_find_biggest(a);
	if (num == 0)
	{
		if (a->base[a->top] > a->base[a->top - 1])
			ft_sa(a);
	}
	else if (num == 1)
	{
		ft_rra(a);
		if (a->base[a->top] > a->base[a->top - 1])
			ft_sa(a);
	}
	else if (num == 2)
	{
		ft_ra(a);
		if (a->base[a->top] > a->base[a->top - 1])
			ft_sa(a);
	}
}
