/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lentil_space.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:08:07 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:16:36 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lentil_space(const char *str)
{
	int	i;

	i = 0;
	while ((str[i] != 0x20) && (str[i] != 0x0))
		i++;
	return (i);
}
