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

static	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

static    ft_hex(unsigned long num)
{
    unsigned long count;
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
    unsigned long pp = (unsigned long)ptr;
    count += write(1, "0x", 2);
    count += ft_hex(pp); 
    return (count);
}

#include <stdio.h>
int	main(void)
{
	int n = 4658;
	int length = ft_print_ptr(&n);
	write(1, "\n", 1); 
	printf("Printed length: %d\n", length);  
    int no = -1;
	int len = ft_print_ptr(&no);
	write(1, "\n", 1); 
	printf("Printed length: %d\n", len); 
    printf("%p", &no);
	return (0);
}