/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:42:00 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/01 14:43:34 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest_str, const void *src_str, size_t numBytes)
{
	char	*dest;
	char	*src;
	int	i;
	int	j;
	
	dest = (char *)dest_str;
	src = (char *)src_str;
	while(src[j] != '\0' && i < numBytes)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
