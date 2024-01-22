# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhromylo <mhromylo@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 17:46:09 by mhromylo          #+#    #+#              #
#    Updated: 2023/12/04 12:36:32 by mhromylo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = \
ft_putchar_count.c ft_putstr_counter.c ft_putp.c ft_putnb.c ft_putnbu.c \
ft_puthex.c ft_printf.c


OBJECTS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a


all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

clean :
		rm -f *.o
fclean: clean
		rm -f $(NAME)
re: fclean all
