NAME = libftprintf.a
SRCS = ft_printf.c \
       ft_putchar.c \
       ft_putstr.c \
       ft_putnbr.c \
       ft_atoi.c \
       ft_putunbr.c \
       ft_putnbr_base.c \
       ft_put_memory.c \
       get_next_line_utils.c \
       get_next_line.c

OBJS = $(SRCS:.c=.o)
RM = rm -f
LIBC = ar -rcs
FLAGS = -Wall -Wextra -Werror

all: $(NAME)



%.o : %.c
		gcc ${FLAGS} -c $< -o $@
		
$(NAME): ${OBJS}
		${LIBC} $(NAME) $(OBJS)

bonus: $(NAME)
	gcc ${FLAGS}  $(SRCS) -o libft


clean :
	$(RM) $(OBJS) libft

fclean: clean
	$(RM) $(NAME) $(bonus)

re: fclean all

.PHONY: all bonus fclean clean re