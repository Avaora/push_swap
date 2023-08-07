#include "push_swap.h"

void	ft_check_args(int argc, char *argv[])
{
	int	count;
	ft_is_only_sdmp(argc, argv);
	count = ft_count_args(argc, argv);
	printf("count: %d", count);
	//ft_is_unique(argc, argv);
}