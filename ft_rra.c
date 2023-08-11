/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:09:17 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:20:13 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->top < 1)
		return ;
	tmp = stack->base[0];
	i = 0;
	while (i < stack->top)
	{
		stack->base[i] = stack->base[i + 1];
		i++;
	}
	stack->base[stack->top] = tmp;
	write(1, "rra\n", 4);
}
