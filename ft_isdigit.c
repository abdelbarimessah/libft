/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:07:19 by amessah           #+#    #+#             */
/*   Updated: 2021/11/02 16:46:06 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <ctype.h>

int ft_isdigit (int c )
{
    if (c >= 48 && c <= 57)
        return(1);
    else 
        return(0);
}

/*int main()
{
    printf("%d\n",ft_isdigit('a'));   
    printf("%d",isdigit('a'));
}*/