#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
typedef struct s_stack
{
	int	*base;
	int	top;
	int	size;
}				t_stack;

void	ft_arg_to_stack(int argc, char *argv[], t_stack *stack);
void	ft_check_args(int argc, char *argv[]);
int		ft_count_args(int argc, char *argv[]);
int		ft_count_byte(int argc, char *argv[]);
void	ft_exit(void);
void	ft_init_stack(int argc, t_stack *stack);
void	ft_is_only_sdmp(int argc, char *argv[]);
int		ft_skip_list(char *str, char *lst);
void	*ft_zalloc(size_t size);

#endif