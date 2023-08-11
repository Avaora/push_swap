/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_smallest.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:07:28 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:15:56 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_smallest(t_stack *stack)
{
	int	num;
	int	i;

	i = stack->top;
	num = stack->base[i];
	while (i > 0)
	{
		i--;
		if (num > stack->base[i])
			num = stack->base[i];
	}
	i = stack->top;
	while (i > -1)
	{
		if (num == stack->base[i])
			break ;
		i--;
	}
	return (i);
}
