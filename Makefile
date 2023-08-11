SRC =	ft_args_to_int.c \
		ft_atoi.c \
		ft_bubble_sort.c \
		ft_3n_sort.c \
		ft_4n_sort.c \
		ft_5n_sort.c \
		ft_check_args.c \
		ft_check_one_arg.c \
		ft_copy_to_list.c \
		ft_count_args.c \
		ft_digit_count.c \
		ft_exit.c \
		ft_find_biggest.c \
		ft_find_smallest.c \
		ft_init_stacks.c \
		ft_is_ascending.c \
		ft_is_unique.c \
		ft_lentil_space.c \
		ft_pa.c \
		ft_pb.c \
		ft_ra.c \
		ft_radix_sort.c \
		ft_rb.c \
		ft_rr.c \
		ft_rra.c \
		ft_rrb.c \
		ft_rrr.c \
		ft_sa.c \
		ft_sb.c \
		ft_select_algo.c \
		ft_simplify_stack.c \
		ft_skip_list.c \
		ft_ss.c \
		ft_zalloc.c \
		push_swap.c
OBJ = $(SRC:.c=.o)
NAME = push_swap

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -g

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
$(OBJ) : $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all
.PHONY : all clean fclean re