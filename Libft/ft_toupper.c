// char *ft_toupper(char *str)
// {
//     int i = 0;
//     while(str[i])
//     {
//         if(str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[i] = str[i] - 32;
//         }
//         i++;
//     }
//     return (str);
// }

// #include <stdio.h>
// int main()
// {
//     char str[] = "i love you to the moon and back";
//     printf("%s", ft_toupper(str));
// }

int ft_toupper(int ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    return (ch);
}

#include <stdio.h>

int main()
{
    char c = 's';
    printf("%c", ft_toupper(c));
}
