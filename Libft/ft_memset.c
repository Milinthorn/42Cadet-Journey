#include <stddef.h>

void *ft_memset (void *str, int c, size_t n)
{
    char *ptr;
    
    ptr = (char *)str;
    while(n > 0)
    {
        *ptr = c;
        ptr++;
        n--;
    }
    return (str);
}
#include <stdio.h>
int main()
{
    char str[50] = "I love you so much";
    ft_memset(str + 7, '.', 3);
    printf("%s", str);
}