/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 22:52:20 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/04 13:52:59 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*arr;
	size_t	i;
	size_t	sum;

	sum = count * size;
	if (count != 0 && sum / count != size)
		return (0);
	arr = malloc(sum);
	if (arr == 0)
		return (NULL);
	i = 0;
	while (i < sum)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
