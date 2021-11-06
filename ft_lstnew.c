/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:16:51 by amessah           #+#    #+#             */
/*   Updated: 2021/11/06 16:18:15 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *elment;
    elment = (t_list *)malloc(sizeof(t_list));
    if(!elment)
        return(NULL);
    elment -> content = content ;
    elment -> next = NULL;
    return(elment);
}
