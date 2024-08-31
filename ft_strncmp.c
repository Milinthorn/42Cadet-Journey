#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i = 0;
    while(i < n && s1[i] == s2[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

int main()
{
    char str1[] = "yhicken";
    char str2[] = "chicago";
    printf("%d", ft_strncmp(str1, str2, 3));
}