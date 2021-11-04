/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:51:05 by amessah           #+#    #+#             */
/*   Updated: 2021/11/02 16:44:00 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
char *ft_strrchr(const char *s, int c)
{
    char c1;
    char *str;
    int len;
    str = (char *)s;
    c1 = (char)c;
    len = strlen(str);
    while(len >= 0)
    {
        if(str[len] == c1)
            return(str + len);
        len--;   
    }
    return(NULL);
}
/*int main()
{
    const char d[] = "sksfgjhsdkjfhskj";
    char s;
    s = 103; 
    printf("%s",ft_strrchr(d,s));
}*/