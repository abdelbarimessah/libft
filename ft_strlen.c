/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:15:07 by amessah           #+#    #+#             */
/*   Updated: 2021/11/03 09:57:08 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
size_t ft_strlen(const char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        i++;
    }
    return(i);
}
/*int main()
{
    printf("%d\n",ft_strlen("fbjdnb"));
    printf("%lu",strlen("fbjdnb"));   
}
*/