#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    char *s1 = (char *)str1;
    char *s2 = (char *)str2;
    int i = 0;

    while(i < n && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

#include <stdio.h>

int main()
{
    char str1[] = "tomorrow";
    char str2[] = "tomato";
    printf("%d", ft_memcmp(str1, str2, 6));
}