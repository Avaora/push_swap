#include "push_swap.h"

int	ft_lentil_space(const char *str)
{
	int	i;

	i = 0;
	while ((str[i] != 0x20) && (str[i] != 0x0))
		i++;
	return (i);
}