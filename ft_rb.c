/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:08:49 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:19:52 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->top < 1)
		return ;
	tmp = stack->base[stack->top];
	i = stack->top;
	while (i > 0)
	{
		stack->base[i] = stack->base[i - 1];
		i--;
	}
	stack->base[0] = tmp;
	write(1, "rb\n", 3);
}
