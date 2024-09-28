/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:46:36 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/28 13:18:08 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_print_uint(unsigned int num)
{
    unsigned int count;
    char    c;
    
    count = 0;
    if (num > 9)
        count += ft_print_uint(num / 10);
    c = (num % 10) + '0';
    count += write(1, &c, 1);
    return (count);
}
// #include <stdio.h>

// int main()
// {
//     printf("%d", ft_print_uint(378));
// }