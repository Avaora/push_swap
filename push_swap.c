/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:10:51 by ikalende          #+#    #+#             */
/*   Updated: 2023/08/11 09:23:53 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;
	int		count_args;

	if (argc > 1)
	{
		ft_check_args(argc, argv);
		count_args = ft_count_args(argc, argv);
		a.base = ft_args_to_int(argc, argv, count_args);
		if (count_args == 1)
			ft_exit(0, NULL, NULL);
		ft_init_stacks(count_args, &a, &b);
		ft_is_unique(&a);
		if (ft_is_ascending(&a) == 0)
			ft_exit(0, a.base, b.base);
		ft_select_algo(&a, &b);
	}
	return (0);
}
