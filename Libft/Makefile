NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

FILE = ft_atoi.c ft_isdigit.c ft_memmove.c ft_strlen.c ft_toupper.c ft_bzero.c ft_isprint.c ft_memset.c ft_strncmp.c ft_isalnum.c ft_memchr.c ft_strchr.c ft_strnstr.c ft_isalpha.c ft_memcmp.c ft_strlcat.c ft_strrchr.c ft_isascii.c ft_memcpy.c ft_strlcpy.c ft_tolower.c

OBJ = $(FILE:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

