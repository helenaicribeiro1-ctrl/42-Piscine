# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/03 19:12:23 by hede-car          #+#    #+#              #
#    Updated: 2026/04/03 19:12:23 by hede-car         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = ft_display_file
SRCS = ft_display_file.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(TARGET)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(TARGET)

.PHONY: all clean fclean
