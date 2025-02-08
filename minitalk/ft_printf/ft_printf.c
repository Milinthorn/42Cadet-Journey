/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:30:23 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/28 13:18:11 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printer(va_list arg, const char alpha)
{
	int	len;

	len = 0;
	if (alpha == 'c')
		len += ft_print_char((char)va_arg(arg, int));
	else if (alpha == 's')
		len += ft_print_str(va_arg(arg, char *));
	else if (alpha == 'd' || alpha == 'i')
		len += ft_print_int(va_arg(arg, int));
	else if (alpha == 'u')
		len += ft_print_uint(va_arg(arg, unsigned int));
	else if (alpha == 'x')
		len += ft_print_hex_tolower(va_arg(arg, unsigned int));
	else if (alpha == 'X')
		len += ft_print_hex_toupper(va_arg(arg, unsigned int));
	else if (alpha == 'p')
		len += ft_print_ptr(va_arg(arg, void *));
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	arg;

	va_start(arg, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%')
				count += write(1, "%", 1);
			else if (*str == 'c' || *str == 's' || *str == 'd' || *str == 'i'
				|| *str == 'u' || *str == 'x' || *str == 'X' || *str == 'p')
				count += ft_printer(arg, *str);
			else
				break ;
		}
		else
			count += ft_print_char(*str);
		str++;
	}
	va_end(arg);
	return (count);
}
