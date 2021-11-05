/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:16:54 by amessah           #+#    #+#             */
/*   Updated: 2021/11/05 09:43:27 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    size_t k;
    char *str;
    
    i = 0;
    j = 0;
    k = 0;
    if(s1 == 0 || s1 == 0)
        return(NULL);
    i = strlen(s1);
    j = strlen(s1);
    str = (char *)malloc((i + j + 1) * sizeof(char));
    if(str == 0)
        return(0);
    i = 0;
    j = 0;
    if(s1 && s2)
    {
        while(s1[i])
            str[k++] = s1[i++];
        while(s2[j])
            str[k++] = s2[j++];
        str[k] = '\0';
        return(str);
    }
    return(NULL);
}
/*
int main ()
{
    char t[] = "abdo";
    char s[] = "messah";
    printf("%s",ft_strjoin(t,s));
}*/