/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3n_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:05:28 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:11:26 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_3n_sort(t_stack *a)
{
	int	num;

	num = ft_find_biggest(a);
	if (num == 0)
	{
		if (a->base[a->top] > a->base[a->top - 1])
			ft_sa(a);
	}
	else if (num == 1)
	{
		ft_rra(a);
		if (a->base[a->top] > a->base[a->top - 1])
			ft_sa(a);
	}
	else if (num == 2)
	{
		ft_ra(a);
		if (a->base[a->top] > a->base[a->top - 1])
			ft_sa(a);
	}
}
