int	ft_atoi(const char *str)
{
	int	sign;
	int	sum;

	sign = 1;
	sum = 0;
	while ((*str == 0x20) && (*str != 0x0))
		str++;
	while (*str != 0x20 && *str != 0x0)
	{
		if (*str == 0x2d)
			sign = -1;
		else if (*str == 0x2b)
			sign = 1;
		else if (ft_dtoi(str, sum) > sum)
			sum += ft_dtoi(str, sum);
		else
			ft_exit();
		str++;
	}
	return ((sum * sign));
}