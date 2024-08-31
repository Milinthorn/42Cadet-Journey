int ft_strlen(char *str)
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
    printf("%d", ft_strlen(str));
}