/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_tolower.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:27:11 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/28 13:17:37 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_hex_tolower(unsigned int num)
{
    unsigned int count;
    char c;

    count = 0;
    if (num >= 16)
        count = ft_print_hex_tolower(num / 16);
    num = num % 16;
    if (num < 10)
        c = num + '0'; 
    else
        c = num - 10 + 'a';
    count += ft_print_char(c);
    return (count);
}

// #include <stdio.h>
// int     main()
// {
//    printf("%d", ft_print_hex_tolower(94));
// }
