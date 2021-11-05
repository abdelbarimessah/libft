/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:33:24 by amessah           #+#    #+#             */
/*   Updated: 2021/11/05 09:44:18 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start,size_t len)
{
    size_t i ;
    char *str;
    i = 0;
    if(s == 0)
        return(NULL);
    if (start >= len)
        return(strdup(""));
    str = (char *)malloc((len + 1) * sizeof(char));
    if(str == NULL)
        return(NULL);
    while(s[start + i] && i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return(str);
}
/*
int main()
{
    char t[] = "01234";
    printf("%s",ft_substr(t,10,20));
}*/