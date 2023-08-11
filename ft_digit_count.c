/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:07:04 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:15:03 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
