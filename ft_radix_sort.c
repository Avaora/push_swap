#include "push_swap.h"

void	ft_radix_sort(t_stack *a, t_stack *b)
{
	int	dig_count;
	int	sft;
	int	i;

	sft = ft_find_biggest(a);
	dig_count = ft_digit_count(sft);
	sft = 0;
	while (sft < dig_count)
	{
		i = a->top;
		while (i > -1)
		{
			if (((a->base[a->top]>>sft)&1) == 0)
				ft_pb(a, b);
			else
				ft_ra(a);
			i--;
		}
		while (b->top > -1)
			ft_pa(b, a);
		sft++;
	}
}