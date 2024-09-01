/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:45:18 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/01 17:40:49 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(char *str, int search_str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == search_str)
		{
			while (str[j] != '\0')
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
