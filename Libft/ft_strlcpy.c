/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:48:56 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/01 14:49:52 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t dstsizeof)
{
	size_t	len;
	size_t	i;
	
	len = 0;
	i = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0' && i < (dstsizeof - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

