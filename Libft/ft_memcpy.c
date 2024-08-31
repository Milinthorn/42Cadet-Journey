#include "libft.h"

void *ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
    char *dest = (char *)dest_str;
    char *src = (char *)src_str;
    int i = 0;
    int j =0;

    while(src[j] != '\0' && i < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    return (dest);
}

#include <stdio.h>

int main()
{
    char dest[] = "piggy happy";
    char src[] = "Happy Birthday";
    ft_memcpy(dest, src, 2);
    printf("%s", dest);
}