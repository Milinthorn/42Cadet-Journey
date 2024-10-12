/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:31:34 by mpinthas          #+#    #+#             */
/*   Updated: 2024/10/12 14:31:36 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 100
#endif

#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    char *str_data;
    struct Node *next;
}           t_Node;

char *get_next_line(int fd);

#endif
