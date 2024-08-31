int ft_isprint(int arg)
{
    if(arg >= 32 && arg <= 127)
    {
        return (1);
    }
    return (0);
}

#include <stdio.h>
int main()
{
    // int num = 48; and char s = 48; is printable
    // int num = 1; and char s = 1; is not printable
    char s = '2';
    printf("%d", ft_isprint(s));
}