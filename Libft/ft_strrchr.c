/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:56:11 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/01 17:03:19 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int search_str)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	i = len - 1;
	while (str[i])
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
		i--;
	}
	str[j] = '\0';
	return (str);
}
