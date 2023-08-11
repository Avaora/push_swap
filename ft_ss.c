/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:10:29 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:23:29 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ss(t_stack *a, t_stack *b)
{
	int	tmp;

	if ((a->top < 1) || (b->top < 1))
		return ;
	tmp = a->base[a->top];
	a->base[a->top] = a->base[a->top - 1];
	a->base[a->top - 1] = tmp;
	tmp = b->base[b->top];
	b->base[b->top] = b->base[b->top - 1];
	b->base[b->top - 1] = tmp;
	write(1, "ss\n", 3);
}
