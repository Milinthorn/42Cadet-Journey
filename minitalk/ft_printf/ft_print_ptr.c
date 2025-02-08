/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:31:42 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/28 13:17:57 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned long num)
{
	unsigned long	count;
	char			c;

	count = 0;
	if (num >= 16)
	{
		count += ft_hex(num / 16);
	}
	num = num % 16;
	if (num < 10)
	{
		c = num + '0';
	}
	else
	{
		c = num - 10 + 'a';
	}
	count += ft_print_char(c);
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	int				count;
	unsigned long	pp;

	count = 0;
	pp = (unsigned long)ptr;
	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	count += write(1, "0x", 2);
	count += ft_hex(pp);
	return (count);
}
