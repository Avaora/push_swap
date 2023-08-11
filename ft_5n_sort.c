/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_5n_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:05:49 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:12:18 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_5n_sort(t_stack *a, t_stack *b)
{
	int	num;

	num = ft_find_smallest(a);
	if (num == 4)
		ft_pb(a, b);
	else if ((num == 3) || (num == 2))
	{
		ft_ra(a);
		if (num == 2)
			ft_ra(a);
		ft_pb(a, b);
	}
	else if ((num == 1) || (num == 0))
	{
		ft_rra(a);
		if (num == 1)
			ft_rra(a);
		ft_pb(a, b);
	}
	ft_4n_sort(a, b);
	ft_pa(b, a);
}
