/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_toupper.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:28:32 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/28 13:17:45 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_toupper(unsigned int num)
{
	unsigned int	count;
	char			c;

	count = 0;
	if (num >= 16)
		count = ft_print_hex_toupper(num / 16);
	num = num % 16;
	if (num < 10)
		c = num + '0';
	else
		c = num - 10 + 'A';
	count += ft_print_char(c);
	return (count);
}
