/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:43:53 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/01 14:44:48 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset (void *str, int c, size_t n)
{
	char	*ptr;
	
	ptr = (char *)str;
	while(n > 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (str);
}
