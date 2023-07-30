#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>

typedef struct s_stack
{
	int	*base;
	int	top;
	int	size;
}				t_stack;

void	ft_arg_to_stack(int argc, char *argv[], t_stack *stack);
void	ft_check_args(int argc, char *argv[]);
void	ft_exit(char *str);
void	ft_init_stack(int argc, t_stack *stack);
void	*ft_zalloc(size_t size);
int		main(int argc, char *argv[]);
#endif