/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:11:24 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/28 13:16:27 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>

int     ft_printf(const char *str, ...);
int     ft_print_char(char c);
int     ft_print_str(char *str);
int     ft_print_int(int    num);
int     ft_print_uint(unsigned int num);
int     ft_print_hex_tolower(unsigned int num);
int     ft_print_hex_toupper(unsigned int num);
int     ft_print_ptr(void *ptr);

#endif