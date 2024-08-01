# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/31 13:52:41 by jopereir          #+#    #+#              #
#    Updated: 2024/08/01 10:49:39 by jopereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_putchar.c \
	ft_putstr.c \
	ft_strcmp.c \
	ft_strlen.c \
	ft_swap.c
SRCS_DIR = ./srcs/
HEADER_DIR = ./includes/
HEADER = $(HEADER_DIR)/ft.h
SRCS = $(addprefix $(SRCS_DIR), $(SRC))
OBJS = $(SRCS:.c = .o)
NAME = libft.a
CC = cc
CCFLAGS = -Wall -Wextra -Werror

all : $(NAME)

.c.o:
	$(CC) $(CCFLAGS) -I $(HEADER_DIR) -c $< -o ${<:.c = .o}

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re