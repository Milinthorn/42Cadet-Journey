/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:53:21 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/01 17:28:28 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	p;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < len)
	{
		if (dest[i] == src[j])
			p = i;
		while (dest[i] == src[j])
		{
			i++;
			j++;
		}
		if (src[j] == '\0')
			return ((char *)dest + p);
		i++;
	}
	return (0);
}
