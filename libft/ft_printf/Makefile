
SRC = ft_putchar.c ft_putstr.c ft_putnbr.c ft_printf.c \
		ft_unsigned_int.c ft_ptr.c ft_hex.c ft_upperhex.c

OBJ = ${SRC:.c=.o}

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./
RM = rm -f
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

norm:
	@norminette *.c *.h
	
.PHONY: all clean fclean re

