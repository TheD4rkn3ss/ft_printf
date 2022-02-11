NAME	= libftprintf.a
HEADER	= ./libft/libft.h ft_printf.h
SRCS	= ./libft/ft_itoa.c ./libft/ft_strlen.c convert_u.c \
		convert_s.c convert_c.c convert_d_i.c convert_x.c convert_p.c \
		ft_printf.c ft_printf_utils.c
OBJS	= $(SRCS:.c=.o)
AR		= ar rcs
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Werror -Wextra -g
NORM	= norminette

all: $(NAME)

debug:
	$(CC) $(CFLAGS) $(SRCS)

bonus:

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) -c $(CFLAGS) $< -o $@

norm: $(SRCS)
	$(NORM) $^

clean:
	$(RM) $(OBJS) $(BONUSOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
