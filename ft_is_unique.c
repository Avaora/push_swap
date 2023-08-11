/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_unique.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:07:59 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:16:21 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_is_unique(t_stack *stack)
{
	int	num;
	int	i;

	num = stack->top;
	while (num > 0)
	{
		i = num - 1;
		while (i > -1)
		{
			if (stack->base[num] == stack->base[i])
				ft_exit(1, stack->base, NULL);
			i--;
		}
		num--;
	}
}
