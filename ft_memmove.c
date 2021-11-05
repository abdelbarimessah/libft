/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:17:47 by amessah           #+#    #+#             */
/*   Updated: 2021/11/05 09:42:50 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *s;
    unsigned char *d;
    s = (unsigned char *)src;
    d = (unsigned char *)dst;
    if(dst == 0 && src == 0)
        return(0);
    if(dst > src)
    {
        while(len)
        {
            len--;
            d[len] = s[len];
        }
    } 
    //if(d < s)
      //  ft_memcpy(d,s,len); when you do the makefile
    while(len--)
    {
        *d++ = *s++;
    }
    return((void *)dst);
}
/*
int main ()
{
    char d[] = "aaaaaa";
    char s[] = "ooooooooooooooooo";
    char d1[] = "aaaaaaaaaaaaaaaaaaaaaaaaa";
    char s1[] = "oooooooooooooooooo";
    ft_memmove(d,s,5);
    printf("%s\n",d);
    memmove(d1,s1,5);
    printf("%s\n",d1);
    
    
}*/
