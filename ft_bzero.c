/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:11:10 by amessah           #+#    #+#             */
/*   Updated: 2021/11/05 09:41:34 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void   ft_bzero(void *s, size_t n)
{
    size_t i;
    i = 0;
    
    unsigned char *str;
    str = (unsigned char *)s;
    while(i < n)
    {
        str[i] = 0;
        i++;
    }
}
