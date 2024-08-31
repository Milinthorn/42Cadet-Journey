#include <stddef.h>

void *ft_memmove(void *dest_str, const void *src_str, size_t numBytes)
{
    char *dest;
    char *src;
    int i;
    int j;

    dest = (char *)dest_str;
    src = (char *)src_str;
    while(src[j] != '\0' && i < numBytes)
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
    char dest[] = "piggyfishy";
    char src[] = "birdychicky";
    ft_memmove(dest, src, 8);
    printf("%s", dest);
}