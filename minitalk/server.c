/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:46:20 by mpinthas          #+#    #+#             */
/*   Updated: 2025/02/08 19:10:47 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

unsigned short	g_collect_all = 0;

void	get_bit(int signum)
{
	unsigned char	collect_char;
	unsigned char	bit_count;

	collect_char = (g_collect_all >> 8) & 255;
	bit_count = g_collect_all & 255;
	if (signum == SIGUSR1)
		collect_char <<= 1;
	else if (signum == SIGUSR2)
		collect_char = (collect_char << 1) | 1;
	bit_count++;
	if (bit_count == 8)
	{
		if (collect_char == '\0')
			write(1, "\n", 1);
		else
			write(1, &collect_char, 1);
		collect_char = 0;
		bit_count = 0;
	}
	g_collect_all = (collect_char << 8) | bit_count;
}

int	main(void)
{
	pid_t				pid;
	struct sigaction	sa;

	pid = getpid();
	printf("Server PID: %d\n", pid);
	printf("Waiting for signals...\n");
	sa.sa_handler = get_bit;
	// sa.sa_flags = ;
	sa.sa_flags = SA_RESTART;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}
