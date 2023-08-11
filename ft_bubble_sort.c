#include "push_swap.h"

void	ft_bubble_sort(int	*lst, int size)
{
	int	tmp;
	int	i;

	while (size > 0)
	{
		i = 0;
		while (i < size)
		{
			if (lst[i] > lst[i + 1])
			{
				tmp = lst[i + 1];
				lst[i + 1] = lst[i];
				lst[i] = tmp;
			}
			i++;
		}
		size--;
	}
}