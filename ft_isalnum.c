/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:22:10 by amessah           #+#    #+#             */
/*   Updated: 2021/11/02 16:46:26 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <ctype.h>

int ft_isalnum(int c)
{
    if ((c >= 48 && c <= 57) || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return(1);
    else 
        return(0);
}
/*int main()
{
    printf("%d\n",ft_isalnum('1'));   
    printf("%d",isalnum('1'));
}
*/