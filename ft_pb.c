/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:08:20 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:16:47 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_stack *a, t_stack *b)
{
	if (a->top == -1)
		return ;
	b->top++;
	b->base[b->top] = a->base[a->top];
	a->top--;
	write(1, "pb\n", 3);
}
