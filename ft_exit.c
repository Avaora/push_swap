/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:07:12 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:15:35 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(int flag, void *mem1, void *mem2)
{
	int	i;

	i = 0;
	if (flag == 1)
		write(2, "Error\n", 6);
	if (mem1 != NULL)
		free(mem1);
	if (mem2 != NULL)
		free(mem2);
	if (flag == 1)
		exit(1);
	exit(0);
}
