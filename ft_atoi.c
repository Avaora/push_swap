#include "push_swap.h"

int	ft_atoi(const char *str)
{
	long long sum;
	int	sign;
	int	i;

	sign = 1;
	sum = 0;
	i = 0;
	if (ft_lentil_space(str) > 11)
		ft_exit();
	if (str[i] == 0x2d)
		sign = -1;
	i += ft_skip_list(str, "-+");
	while ((str[i] != 0x20) && (str[i] != 0x0))
	{
		sum *= 10;
		sum = (sum + (str[i] - 0x30));
		i++;
	}
	sum = sum * sign;
	if ((sum < INT_MIN) || (sum > INT_MAX))
		ft_exit();
	return (sum);
}