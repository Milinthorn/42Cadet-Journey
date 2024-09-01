/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:33:22 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/01 17:00:15 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*strr;
	int	i;
	int	j;

	strr = (char *)str;
	i = 0;
	j = 0;
	while (strr[i] != '\0' && i < n)
	{
		if (strr[i] == c)
		{
			return ((char *)strr + i);
		}
		i++;
	}
	return (0);
}
