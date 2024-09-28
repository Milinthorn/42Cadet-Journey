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

int	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int    ft_hex(uintptr_t num)
{
    int count;
    char c;

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

int ft_print_ptr(void *ptr)
{
    int count;

    count = 0;
    uintptr_t ptr_ad = (uintptr_t)ptr;
    count += write(1, "0x", 2);
    ft_hex(ptr_ad);
    count += ft_hex(ptr_ad); 
    return (count);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *str = "hello";
// 	int	len = ft_print_ptr(str);
// 	write(1, "\n", 1); 
// 	int n = 4658;
// 	int length = ft_print_ptr(&n);
// 	write(1, "\n", 1); 
// 	printf("Printed length: %d\n", len);
// 	printf("Printed length: %d\n", length);  
// 	return (0);
// }