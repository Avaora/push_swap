/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:10:18 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:23:08 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_skip_list(const char *str, char *lst)
{
	int	i;
	int	x;

	i = 0;
	while (str[i] != 0x0)
	{
		x = 0;
		while (lst[x] != 0x0)
		{
			if (str[i] == lst[x])
			{
				i++;
				break ;
			}
			x++;
		}
		if (lst[x] == 0x0)
			break ;
	}
	return (i);
}
