int	ft_atoi(const char *str)
{
	int	sign;
	int	sum;

	sign = 1;
	sum = 0;
	while ((((*str > 0x08) && (*str < 0x0e)) || (*str == 0x20))
		&& (*str != 0x0))
		str++;
	if (*str == 0x2d)
	{
		sign = -1;
		str++;
	}
	else if (*str == 0x2b)
		str++;
	while (((*str > 0x2f) && (*str < 0x3a)))
	{
		sum *= 10;
		sum = (sum + (*str - 0x30));
		str++;
	}
	return ((sum * sign));
}