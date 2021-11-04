/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:13:19 by amessah           #+#    #+#             */
/*   Updated: 2021/11/02 16:47:16 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <ctype.h>

int ft_isascii(int c)
{
   if (c >= 0 && c <= 127) 
        return(1);
    else
        return(0);
}

/*int main(int ac ,char *av[])
{
    printf("%d\n",ft_isascii(av[1][0]));
    printf("%d",isascii(av[1][0]));
}*/