# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssottori <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 21:19:06 by ssottori          #+#    #+#              #
#    Updated: 2023/12/07 14:04:23 by ssottori         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CCF = cc -Wall -Wextra -Werror
AR = ar -rcs
RM = rm -f
SRC = ft_printf.c \
	  ft_putchar.c \
	  ft_putptr.c \
	  ft_puthex.c \
	  ft_putstr.c \
	  main.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CCF) -c $< -o $@

$(NAME): $(OBJ)
	$(AR) $(NAME) $^

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
