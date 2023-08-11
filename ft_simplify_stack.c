/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simplify_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:10:10 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:23:03 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_simplify_stack(t_stack *stack, int *sorted)
{
	int	num;
	int	i;

	num = stack->top;
	while (num > -1)
	{
		i = 0;
		while (i < stack->size)
		{
			if (stack->base[num] == sorted[i])
			{
				stack->base[num] = i;
				break ;
			}
			i++;
		}
		num--;
	}
}
