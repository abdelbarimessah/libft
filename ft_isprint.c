/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:42:54 by amessah           #+#    #+#             */
/*   Updated: 2021/11/03 09:00:18 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return(1);
    else
        return(0);
}
/*
int main()
{
     printf("%d\n",ft_isprint('\r'));
    printf("%d",isprint(' '));
}*/