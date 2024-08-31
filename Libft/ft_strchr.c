#include "libft.h"

char *ft_strchr(char *str, int search_str)
{
    int i,j;
    
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == search_str)
        {
            while(str[j] != '\0')
            {
                str[j] = str[i];
                j++;
                i++;
            }
        }
        i++;
    }
    str[j] = '\0'; 
    return (str);
}

#include <stdio.h>

int main()
{
    char str[] = "Happy Sunday";
    char search = 'q';
    printf("%s", ft_strchr(str, search));
}

// ถ้าเจอ ' ' ให้ลูปตัวถัดไปออกมาให้หมด