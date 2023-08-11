/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:07:43 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:16:07 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_stacks(int count_args, t_stack *a, t_stack *b)
{
	b->base = ft_zalloc(sizeof(*b->base) * (count_args));
	b->top = -1;
	b->size = count_args;
	a->top = count_args - 1;
	a->size = count_args;
}
