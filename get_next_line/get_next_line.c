/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:31:09 by mpinthas          #+#    #+#             */
/*   Updated: 2024/10/12 13:07:29 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(int fd, char *str)
{
	char	*buffer;
	int		bytes;

	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	bytes = 1;
	while (bytes > 0 && !ft_strchr(str, '\n'))
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(str);
			free(buffer);
			return (NULL);
		}
		buffer[bytes] = '\0';
		str = ft_strjoin(str, buffer);
	}
	free(buffer);
	return (str);
}

char	*ft_line(char *str)
{
	char	*bf_line;
	int		i;

	i = 0;
	if (!*str)
		return (NULL);
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	bf_line = (char *)malloc(i + 2);
	if (!bf_line)
		return (NULL);
	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
	{
		bf_line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		bf_line[i] = str[i];
		i++;
	}
	bf_line[i] = '\0';
	return (bf_line);
}

char	*ft_left_over(char *str)
{
	char	*bf_left;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	bf_left = (char *)malloc(sizeof(char) * ft_strlen(str) - i + 1);
	if (!bf_left)
		return (NULL);
	i++;
	while (str[i] != '\0')
		bf_left[j++] = str[i++];
	bf_left[j] = '\0';
	free(str);
	return (bf_left);
}

char	*get_next_line(int fd)
{
	static char	*strbf;
	char		*keepline;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	strbf = ft_read(fd, strbf);
	if (!strbf)
		return (NULL);
	keepline = ft_line(strbf);
	strbf = ft_left_over(strbf);
	return (keepline);
}

// int main()
// {
//     int fd = open("text.txt", O_RDONLY);
//     char *a = get_next_line(fd);

//     while (a)
//     {
//         printf("%s", a);
//         free(a);
//     }

//     close(fd);

//     return (0);
// }
