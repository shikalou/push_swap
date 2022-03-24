# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 13:53:28 by ldinaut           #+#    #+#              #
#    Updated: 2022/03/23 11:53:24 by ldinaut          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRCS	=	srcs/push_swap.c \
			srcs/check_args.c

CC		=	clang

LIB		=	-Llibft -lft -Lft_printf -lftprintf

CFLAGS	=	-Wall -Wextra -Werror -g -I./includes

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
