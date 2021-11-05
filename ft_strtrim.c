/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:02:36 by amessah           #+#    #+#             */
/*   Updated: 2021/11/05 09:44:12 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int check(char c,char const *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        if(c == str[i])
            return(1);
        i++;
    }
    return(0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    size_t i;
    size_t len;
    
    i = 0;
     if(!set || !s1)
        return(0);
    str = strdup(s1);
    if(str == 0)
        return(0);
    while(check(str[i],set))
        i++;
    len = strlen(str) - 1;
    while(len > 0)
    {
        if(check(str[len],set) == 0)
            break;
        str[len] = '\0';
        len --;
    }
    return(strdup(str + i));
}
/*
int main(int ac,char *av[])
{
	printf("%s",ft_strtrim(av[1],av[2]));
}
*/