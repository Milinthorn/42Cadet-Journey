/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:42:04 by mpinthas          #+#    #+#             */
/*   Updated: 2025/02/08 16:42:07 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "ft_printf/ft_printf.h"
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	send_bit(pid_t server_pid, char c);
void	get_bit(int signum);
size_t	ft_strlen(const char *str);
int		ft_atoi(const char *str);

#endif