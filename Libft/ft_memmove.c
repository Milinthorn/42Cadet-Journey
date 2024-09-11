/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:42:00 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/10 22:25:52 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest_str, const void *src_str, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*src;

	i = len;
	if (!dest_str && !src_str)
		return (NULL);
	dest = (unsigned char *)dest_str;
	src = (unsigned char *)src_str;
	if (src < dest && src + len > dest)
	{
		while (i-- > 0)
			dest[i] = src[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest_str);
}
