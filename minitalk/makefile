# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/08 17:30:02 by mpinthas          #+#    #+#              #
#    Updated: 2025/02/08 17:56:38 by mpinthas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_SERVER = server
NAME_CLIENT = client
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS_SERVER = server.c ft_printf/ft_printf.c ft_printf/ft_print_char.c ft_printf/ft_print_int.c ft_printf/ft_print_str.c ft_printf/ft_print_ptr.c ft_printf/ft_print_uint.c ft_printf/ft_print_hex_tolower.c ft_printf/ft_print_hex_toupper.c
SRCS_CLIENT = client.c ft_printf/ft_printf.c ft_printf/ft_print_char.c ft_printf/ft_print_int.c ft_printf/ft_print_str.c ft_printf/ft_print_ptr.c ft_printf/ft_print_uint.c ft_printf/ft_print_hex_tolower.c ft_printf/ft_print_hex_toupper.c

OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)

all: $(NAME_SERVER) $(NAME_CLIENT)

$(NAME_SERVER): $(OBJS_SERVER)
	$(CC) $(CFLAGS) $(OBJS_SERVER) -o $(NAME_SERVER)

$(NAME_CLIENT): $(OBJS_CLIENT)
	$(CC) $(CFLAGS) $(OBJS_CLIENT) -o $(NAME_CLIENT)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS_SERVER) $(OBJS_CLIENT)

fclean: clean
	$(RM) $(NAME_SERVER) $(NAME_CLIENT)

re: fclean all

.PHONY: all clean fclean re


