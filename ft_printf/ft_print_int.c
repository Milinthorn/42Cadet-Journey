/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 10:51:35 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/21 12:42:26 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int num)
{
	int		count;
	char	c;

	count = 0;
	if (num == -2147483648)
	{
		count += write(1, "-2147483648", 11);
		return (count);
	}
	if (num < 0)
	{
		count += write(1, "-", 1);
		num = -num;
	}
	if (num > 9)
		count += ft_print_int(num / 10);
	c = (num % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}
