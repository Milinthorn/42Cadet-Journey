#include "libft.h"

int ft_atoi(const char *str)
{
    int	i;
	int	mn;
	int	num;

	i = 0;
	mn = 1;
	num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			mn = mn * -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * mn);
}

#include <stdio.h>
int main()
{
    char	str[] = "  -+--82974ap457";
	printf("%d", ft_atoi(str));
}
