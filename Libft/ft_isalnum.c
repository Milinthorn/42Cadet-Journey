int ft_isalnum (int ar)
{
    if((ar >= 'A' && ar <= 'Z') || (ar >= 'a' && ar <= 'z') || (ar >= 0 && ar <= 9))
        return (1);
    else
        return (0);
}

#include <stdio.h>
int main()
{
    char ch = '@';
    printf("%d", ft_isalnum(ch));
}