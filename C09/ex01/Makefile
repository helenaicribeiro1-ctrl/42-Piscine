# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/02 10:24:04 by hede-car          #+#    #+#              #
#    Updated: 2026/04/02 10:24:04 by hede-car         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

$(TARGET): $(OBJS)
	ar -rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -I includes -c $< -o $@

all: $(TARGET)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(TARGET)

re: fclean all

.PHONY = all clean fclean re