/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:46:18 by mpinthas          #+#    #+#             */
/*   Updated: 2025/02/08 19:14:13 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(const char *str)
{
	int	sum;
	int	sign;
	int	found;

	sum = 0;
	sign = 1;
	found = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f'
		|| *str == '\r' || *str == '\v')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && found)
	{
		if (*str >= '0' && *str <= '9')
			sum = sum * 10 + *str - '0';
		else
			found = 0;
		str++;
	}
	return (sign * sum);
}

size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

void	send_bit(pid_t server_pid, char c)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 1)
			kill(server_pid, SIGUSR2);
		else
			kill(server_pid, SIGUSR1);
		usleep(1000);
		i--;
	}
}

int	main(int ac, char **av)
{
	size_t	i;
	pid_t	server_pid;
	char	*message;

	i = 0;
	if (ac == 3)
	{
		server_pid = ft_atoi(av[1]);
		message = av[2];
		if (kill(server_pid, 0) == -1)
			return (1);
		while (i < ft_strlen(message))
		{
			send_bit(server_pid, message[i]);
			i++;
		}
		send_bit(server_pid, '\0');
		write(1, "Message sent to Server", 22);
	}
	else
	{
		write(1, "Error: argc must be 3", 21);
		return (1);
	}
	return (0);
}
