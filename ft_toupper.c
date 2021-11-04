/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:17:41 by amessah           #+#    #+#             */
/*   Updated: 2021/11/02 16:45:00 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include<stdio.h>

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return(c - 32);
    else 
        return(c);
}
/*int main()
{
    printf("%c\n",ft_toupper('c'));
    printf("%c",toupper('c'));
}*/