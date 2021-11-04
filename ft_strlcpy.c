/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:54:27 by amessah           #+#    #+#             */
/*   Updated: 2021/11/03 10:27:51 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;
    size_t len;
    
    i = 0;
    len = strlen(src);
    if (src == 0 || dst == 0)
        return(0);
    while(i < (int)size - 1 && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    if (size > 0)
        dst[i] = '\0';
    return(len);
}
/*
int main()
{
    char src[]="hvsvhbshv";
    char dst[50];
    char dst1[50];
    printf("%zu\n",ft_strlcpy(dst,src,5));
    printf("%zu",strlcpy(dst1,src,5));
}
*/