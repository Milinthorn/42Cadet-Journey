/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:53:26 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/22 15:13:05 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list *res;

    res = (t_list *)malloc(sizeof(t_list));
    if (!res)
        return (NULL);
    res -> content = content;
    res -> next = NULL;
    return (res);
}