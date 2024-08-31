#include "libft.h"

int ft_toupper(int ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    return (ch);
}

#include <stdio.h>

int main()
{
    char c = 's';
    printf("%c", ft_toupper(c));
}
