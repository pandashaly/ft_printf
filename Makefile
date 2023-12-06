# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssottori <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 21:19:06 by ssottori          #+#    #+#              #
#    Updated: 2023/12/06 06:10:43 by ssottori         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a
CCF = cc -Wall -Wextra -Werror
AR = ar -rcs
RM = rm -f
SRC =
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
