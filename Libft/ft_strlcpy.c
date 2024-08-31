#include "libft.h"

size_t ft_strlcpy(char *dest, char *src, size_t dstsizeof)
{
    size_t len;
	size_t	i;

	len = 0;
    i = 0;
	while (src[len] != '\0')
    {
        len++;
    }
	while (src[i] != '\0' && i < (dstsizeof - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

#include <stdio.h>
int main()
{
    char dest[10];
    char src[] = "Scoopy Doo";
    int dstsizeof = 7; 
    printf("%ld\n", ft_strlcpy(dest, src, dstsizeof));
    printf("%s", dest);
}

// copy src to dest 
// รีเทิร์นเป็นความยาวของสตริงต้นฉบับว่ามีกี่ตัว (src)