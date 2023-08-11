/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:10:02 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:22:51 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_select_algo(t_stack *a, t_stack *b)
{
	int	*sorted;

	if (a->size == 2)
	{
		if (a->base[a->top] > a->base[a->top - 1])
			ft_sa(a);
	}
	else if (a->size == 3)
		ft_3n_sort(a);
	else if (a->size == 4)
		ft_4n_sort(a, b);
	else if (a->size == 5)
		ft_5n_sort(a, b);
	else
	{
		sorted = ft_zalloc(sizeof(*sorted) * (a->size));
		ft_copy_to_list(a, sorted);
		ft_bubble_sort(sorted, a->top);
		ft_simplify_stack(a, sorted);
		ft_radix_sort(a, b);
		if (sorted != NULL)
			free(sorted);
	}
	ft_exit(0, a->base, b->base);
}
