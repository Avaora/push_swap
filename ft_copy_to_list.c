/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_to_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:06:45 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:14:44 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_copy_to_list(t_stack *stack, int *lst)
{
	int	i;

	i = stack->top;
	while (i > -1)
	{
		lst[i] = stack->base[i];
		i--;
	}
}
