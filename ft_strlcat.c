/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:48:25 by amessah           #+#    #+#             */
/*   Updated: 2021/11/03 13:24:23 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    int	i;
	int len;

	i = 0;
	len = strlen(dst);
	while ((i + len + 1) < (int)size && src[i])
	{
		dst[len + i] = src[i];
		i++;
	}
	if ((int)size > len)
	{
		dst[len + i] = '\0';
		return (len + strlen(src));
	}
	return (size + strlen(src));
}
/*
int main()
{
    char src[] = "abdo";
    char dst[] = "messah";
    printf("%zu",ft_strlcat(dst,src,5));
}*/