/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:08:13 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:16:42 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack *b, t_stack *a)
{
	if (b->top == -1)
		return ;
	a->top++;
	a->base[a->top] = b->base[b->top];
	b->top--;
	write(1, "pa\n", 3);
}
