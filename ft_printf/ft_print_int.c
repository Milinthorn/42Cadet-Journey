/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 10:51:35 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/15 10:51:44 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_print_int(int    num)
{
    int count;
    
    if (num < 0 && num != -2147483648)
    {
        write(1, "-", 1);
        num = num * -1;
    }
    if (num > 0 && num <= 9)
    {
        num = num + '0';
        write(1, &num, 1);
    }
    count = 1;
    if (num >= 10) // 1234
    {
        
    }
    return (count);
}
#include <stdio.h>

int main()
{
    //printf("%d",ft_print_int(1234));
    ft_print_int(1234);
}