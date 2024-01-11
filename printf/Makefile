# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 23:59:34 by andalvar          #+#    #+#              #
#    Updated: 2023/12/21 11:07:27 by andalvar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a
SRC = ft_hexamay.c ft_hexamin.c ft_itoa_base.c ft_por.c ft_printf.c ft_ptr.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putunbr.c
OBJ = $(SRC:.c=.o)
INCLUDE = ft_printf.h Makefile


all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

%.o: %.c $(INCLUDE)
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all