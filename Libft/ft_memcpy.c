/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:39:03 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/01 17:21:53 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	char	*dest;
	char	*src;
	size_t	i;
	size_t	j;

	dest = (char *)dest_str;
	src = (char *)src_str;
	i = 0;
	j = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
