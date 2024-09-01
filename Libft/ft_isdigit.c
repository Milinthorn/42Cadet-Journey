/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:29:24 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/01 14:30:15 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int arg)
{
	if (arg >= 0 && arg <= 9)
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// int main()
// {
//     int num = 7;
//     printf("%d", ft_isdigit(num));
// }