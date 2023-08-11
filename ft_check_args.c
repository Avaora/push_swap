/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:06:26 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:14:10 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_args(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_check_one_arg(argv[i]);
		i++;
	}
}
