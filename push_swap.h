#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>

typedef struct s_stack
{
	int	*base;
	int	*top;
	int	size;
}				t_stack;
#endif