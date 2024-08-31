#include "libft.h"
int ft_isdigit(int arg)
{
    if(arg >= 0 && arg <= 9)
        return (1);
    else
        return (0);
}

#include <stdio.h>
int main()
{
    int num = 7;
    printf("%d", ft_isdigit(num));
}