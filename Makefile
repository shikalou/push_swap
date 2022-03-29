# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 13:53:28 by ldinaut           #+#    #+#              #
#    Updated: 2022/03/29 18:31:41 by ldinaut          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRCS	=	srcs/push_swap.c \
			srcs/check_args.c \
			srcs/ft_init_struct.c \
			srcs/ft_free.c

CC		=	clang

LIB		=	-Llibft -lft -Lft_printf -lftprintf

CFLAGS	=	-Wall -Wextra -Werror -g3 -fsanitize=address -I./includes

OBJS	=	$(SRCS:%.c=%.o)

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			make -C libft
			make -C ft_printf
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIB)

clean	:
			make -C libft clean
			make -C ft_printf clean
			rm -rf $(OBJS)

fclean	:	clean
			make -C libft fclean
			make -C ft_printf fclean
			rm -rf $(NAME)

re		:	fclean all

.PHONY: all clean fclean re
