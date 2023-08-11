#include "push_swap.h"

int	ft_digit_count(int num)
{
	int	i;

	i = 0;
	while (num != 0)
	{
		num = num >> 1;
		i++;
	}
	return (i);
}