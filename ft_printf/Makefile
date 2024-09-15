NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

FILE = ft_printf.c

OBJ = $(FILE:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c &< -o $@

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)
re : fclean all
