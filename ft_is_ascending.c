/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_ascending.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:07:51 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:16:14 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_ascending(t_stack *stack)
{
	int	tmp;

	tmp = stack->top;
	while (tmp > 0)
	{
		if (stack->base[tmp] > stack->base[tmp - 1])
			return (1);
		tmp--;
	}
	return (0);
}
