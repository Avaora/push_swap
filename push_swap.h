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
void	ft_bubble_sort(int	*lst, int size);
void	ft_3n_sort(t_stack *a);
void	ft_4n_sort(t_stack *a, t_stack *b);
void	ft_5n_sort(t_stack *a, t_stack *b);
void	ft_check_args(int argc, char *argv[]);
void	ft_check_one_arg(char argv[]);
void	ft_copy_to_list(t_stack *stack, int *lst);
int		ft_count_args(int argc, char *argv[]);
int		ft_digit_count(int num);
void	ft_exit(int flag, void *mem1, void* mem2);
int		ft_find_biggest(t_stack *stack);
int		ft_find_smallest(t_stack *stack);
void	ft_init_stacks(int count_args, t_stack *a, t_stack *b);
int		ft_is_ascending(t_stack *stack);
void	ft_is_unique(t_stack *stack);
int		ft_lentil_space(const char *str);
void	ft_pa(t_stack *b, t_stack *a);
void	ft_pb(t_stack *a, t_stack *b);
void	ft_ra(t_stack *stack);
void	ft_radix_sort(t_stack *a, t_stack *b);
void	ft_rb(t_stack *stack);
void	ft_rr(t_stack *a, t_stack *b);
void	ft_rra(t_stack *stack);
void	ft_rrb(t_stack *stack);
void	ft_rrr(t_stack *a, t_stack *b);
void	ft_sa(t_stack *stack);
void	ft_sb(t_stack *stack);
void	ft_select_algo(t_stack *a, t_stack *b);
void	ft_simplify_stack(t_stack *stack, int *sorted);
int		ft_skip_list(const char *str, char *lst);
void	ft_ss(t_stack *a, t_stack *b);
void	*ft_zalloc(size_t size);

#endif