#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>
typedef struct s_stack
{
	int	*base;
	int	top;
	int	size;
}				t_stack;

int		*ft_args_to_int(int argc, char *argv[], int count);
int		ft_atoi(const char *str);
void	ft_check_args(int argc, char *argv[]);
int		ft_count_args(int argc, char *argv[]);
void	ft_exit(void);
void	ft_init_stack(int argc, t_stack *stack);
int		ft_lentil_space(const char *str);
int		ft_skip_list(char *str, char *lst);
void	*ft_zalloc(size_t size);

#endif