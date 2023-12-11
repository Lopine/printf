# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plachard <plachard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 14:45:39 by plachard          #+#    #+#              #
#    Updated: 2023/12/09 19:02:02 by plachard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables

NAME		=	libft.a
INCLUDES	=	../include
SRCS_DIR 	=	src/
OBJS_DIR	=	obj/
CC			=	cc
CFLAGS		=	-Wall -Werror -Wextra -I
RM			=	rm -f
AR			=	ar rcs

#	Compiler

CC		=	@cc
CFLAGS	=	-Wall -Wextra -Werror -I

#	Files

SRCS_FILES	=	ft_isalnum \
				ft_memchr \
				ft_strncmp \
				ft_isalpha \
				ft_memcmp \
				ft_strdup \
				ft_strchr	\
				ft_strnstr \
				ft_atoi \
				ft_isascii \
				ft_memcpy \
				ft_strlcat \
				ft_strrchr \
				ft_bzero \
				ft_isdigit \
				ft_memmove \
				ft_strlcpy \
				ft_tolower \
				ft_calloc \
				ft_isprint \
				ft_memset \
				ft_strlen \
				ft_toupper \
				ft_substr \
				ft_strjoin \
				ft_strtrim \
				ft_split \
				ft_itoa \
				ft_strmapi \
				ft_striteri \
				ft_putchar_fd \
				ft_putstr_fd \
				ft_putendl_fd \
				ft_putnbr_fd

SRCS 		= 	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRCS_FILES)))
OBJS 		= 	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRCS_FILES)))

#Rules 
OBJSF		=	.cache_exists

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(AR) $(NAME) $(OBJS)
			@ranlib $(NAME)

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c | $(OBJSF)
			@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJSF):
			@mkdir -p $(OBJS_DIR)

clean:
			@$(RM) -rf $(OBJS_DIR)
			@$(RM) -f $(OBJSF)

fclean:		clean
			@$(RM) -f $(NAME)

re:			fclean all

norm:
	@norminette $(SRCS) $(INCLUDES) | grep -v Norme -B1 || true
