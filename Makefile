SRC =	ft_args_to_int.c \
		ft_atoi.c \
		ft_check_args.c \
		ft_check_one_arg.c \
		ft_count_args.c \
		ft_exit.c \
		ft_init_stack.c \
		ft_lentil_space.c \
		ft_memset.c \
		ft_push.c \
		ft_rev_rotate.c \
		ft_rotate.c \
		ft_select_sort.c \
		ft_skip_list.c \
		ft_swap.c \
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
	$(RM) $(NAME)
fclean : clean
	$(RM) $(OBJ)
re : fclean all
.PHONY : all clean fclean re