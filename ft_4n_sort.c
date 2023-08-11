/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4n_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:05:39 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:12:11 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_4n_sort(t_stack *a, t_stack *b)
{
	int	num;

	num = ft_find_smallest(a);
	if (num == 3)
		ft_pb(a, b);
	else if ((num == 2) || (num == 1))
	{
		ft_ra(a);
		if (num == 1)
			ft_ra(a);
		ft_pb(a, b);
	}
	else if (num == 0)
	{
		ft_rra(a);
		ft_pb(a, b);
	}
	ft_3n_sort(a);
	ft_pa(b, a);
}
