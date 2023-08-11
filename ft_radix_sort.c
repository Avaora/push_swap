/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:08:38 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:19:17 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_radix_sort(t_stack *a, t_stack *b)
{
	int	dig_count;
	int	sft;
	int	i;

	sft = ft_find_biggest(a);
	dig_count = ft_digit_count(a->base[sft]);
	sft = 0;
	while (sft < dig_count)
	{
		i = a->top;
		while (i > -1)
		{
			if (((a->base[a->top] >> sft) & 1) == 0)
				ft_pb(a, b);
			else
				ft_ra(a);
			i--;
		}
		while (b->top > -1)
			ft_pa(b, a);
		if (ft_is_ascending(a) == 0)
			return ;
		sft++;
	}
}
