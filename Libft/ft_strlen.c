#include "libft.h"

size_t ft_strlen(const char *str)
{
    int len;
    int i;

    len = 1;
    i = 1;
    while(str[len] != '\0')
    {
        len++;
        i++;
    }
    return (i);
}

#include <stdio.h>
int main()
{
    char str[] = "Andy Goodboy";
    printf("%ld", ft_strlen(str));
}