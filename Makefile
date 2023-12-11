# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plachard <plachard@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 12:34:29 by plachard          #+#    #+#              #
#    Updated: 2023/12/11 12:34:45 by plachard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Variables
NAME		=	libftprintf.a
RM			= 	rm -rf
INCLUDE		=	include
LIBFT		=	libft
SRC_DIR		=	src/
OBJ_DIR		=	obj/
RM			=	rm -f
AR			=	ar rcs

#	Compiler
CC			=	@cc
CFLAGS		=	-Wall -Wextra -Werror -I

#	Path and Files
SRC_FILES	=	ft_printf ft_printformat

SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

#	Rules
OBJF		=	.cache_exists

all:		$(NAME)

$(NAME):	$(OBJ)
			@make -C $(LIBFT)
			@cp libft/libft.a .
			@mv libft.a $(NAME)
			@$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
			@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJF):
			@mkdir -p $(OBJ_DIR)

clean:
			@$(RM) -rf $(OBJ_DIR)
			@make clean -C $(LIBFT)

fclean:		clean
			@$(RM) -f $(NAME)
			@$(RM) -f $(LIBFT)/libft.a

re:			fclean all

test:
	gcc -c main.c -Iinclude -Isrc -I./libft/
	gcc -o test main.o $(NAME)
	rm -f $(OBJ)

tclean:
	rm -f test
	rm -f main.o

norm:
			@norminette $(SRC) $(INCLUDE) $(LIBFT) | grep -v Norme -B1 || true
