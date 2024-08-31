char *ft_strrchr(char *str, int search_str)
{
    int i,j,len;
    
    len = 0;
    while(str[len])
    {
        len++;
    }
    i = len - 1;
    while(str[i])
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
        i--;
    }
    str[j] = '\0'; 
    return (str);
}

#include <stdio.h>

int main()
{
    char str[] = "Doctor Foster";
    char search = 'o';
    printf("%s", ft_strrchr(str, search));
}

// ค้นหาตำแหน่งสุดท้ายของอักขระในสตริง จากขวาไปซ้าย
// เช่น characters หา c จะได้ cters