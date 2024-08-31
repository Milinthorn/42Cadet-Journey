int ft_tolower(int ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    return (ch);
}

#include <stdio.h>

int main()
{
    char c = 'P';
    printf("%c", ft_tolower(c));
}
