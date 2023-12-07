NAME	= ft_printf.a
CC	= gcc
RM	= rm -rf
CFALGS	= -Wall -Wextra -Werror -Isrc -Iinclude

VPATH	= src
SRCS	= ft_printf.c ft_printformat.c ft_libft.c

OBJS	= $(addprefix obj/, $(SRCS:.c=.o))

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

all:	 $(NAME)

obj:
		mkdir -p obj

obj/%.o: %.c | obj
		$(CC) $(CFLAGS) -o $* -c $<

clean:
		$(RM) obj

fclean: clean
		$(RM) $(NAME)

re:	fclean all
