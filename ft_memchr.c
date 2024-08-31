#include <stddef.h>

void *ft_memchr(const void *str, int c, size_t n)
{
    char *strr;
    int i;
    int j;

    strr  = (char *)str;
    i = 0;
    j = 0;
    while(strr[i] != '\0' && i < n)
    {
        if(strr[i] == c)
        {
            return (char *)strr + i;
        }
        i++;
    }
    return (0);
}

#include <stdio.h>
int  main()
{
    char *str = "Thisis.themostbeautiful-girl"; // 28
    int c = '.';
    int n = 28;
    char *ss = ft_memchr(str, c, n);
    printf("%s", ss);
}