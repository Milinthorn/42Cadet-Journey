/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:31:19 by mpinthas          #+#    #+#             */
/*   Updated: 2024/10/12 14:31:26 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_Node *ft_read(char *str)
{
    int i;
    char *str_cpy;

    if (!str || BUFFER_SIZE < 0)
        return (NULL);
    t_Node *newnode = (t_Node *)malloc(sizeof(t_Node));
    if (!newnode)
        return (NULL);
    str_cpy = ft_strncpy(newnode->str_data, str, BUFFER_SIZE);
    newnode->str_data = str_cpy;
    while (newnode->str_data)
    {
        if (newnode->str_data = '\n')
        {
            
        }
    }
    newnode->next = NULL;
    return (newnode);
}



char *get_next_line(int fd)
{
    if (fd < 0 || BUFFER_SIZE < 1)
	    return (0);
}
