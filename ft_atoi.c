/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:06:08 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:13:40 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	long long	sum;
	int			sign;
	int			i;

	sign = 1;
	sum = 0;
	i = 0;
	if (str[i] == 0x2d)
		sign = -1;
	i += ft_skip_list(str, "-+");
	i += ft_skip_list(&str[i], "0");
	if ((str[i] == 0x20) || (str[i] == 0x0))
		return (0);
	if (ft_lentil_space(&str[i]) > 10)
		ft_exit(1, NULL, NULL);
	while ((str[i] != 0x20) && (str[i] != 0x0))
	{
		sum *= 10;
		sum = (sum + (str[i] - 0x30));
		i++;
	}
	sum = sum * sign;
	if ((sum < INT_MIN) || (sum > INT_MAX))
		ft_exit(1, NULL, NULL);
	return (sum);
}
