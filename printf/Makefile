NAME = libftprintf.a

FILES = ft_printf.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_putnumb.c \
	ft_putpointer.c \
	ft_putunsigned.c \
	ft_puthexadecial.c \
	ft_strlen.c \
	ft_itoa.c

OBJS = $(FILES:%.c=%.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -c
AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
