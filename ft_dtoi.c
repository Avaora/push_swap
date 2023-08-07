#include "push_swap.h"

int	ft_dtoi(const char *str, int sum)
{
	sum *= 10;
	sum = (sum + (*str - 0x30));
	return (sum);
}