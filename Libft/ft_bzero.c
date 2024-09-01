#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    char *ss;
    
    ss = (char *)s;
    while (n > 0)
    {   
        *ss = 0;
        ss++;
        n--;
    }
}
