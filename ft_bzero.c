/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:11:10 by amessah           #+#    #+#             */
/*   Updated: 2021/11/02 19:44:37 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<strings.h>

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