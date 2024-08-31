int ft_isalpha(int c)
{
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    else
        return (0);
}

#include <stdio.h>
int  main()
{
    char ch = 's';
    printf("%d", ft_isalpha(ch));
}

// ถ้าไม่ใช่ alphabet รีเทิร์น 0
// ถ้าเป็น alphabet รีเทิร์น non-zero number