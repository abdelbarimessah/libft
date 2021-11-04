/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:38:17 by amessah           #+#    #+#             */
/*   Updated: 2021/11/03 16:43:25 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void *ft_calloc(size_t count, size_t size)
{
    void	*str;

	str = (void*)malloc(count * size);
	if (str == NULL)
		return (NULL);
	bzero(str, count * size);
	return (str);
}
/*
int main()
{
    int c;
    int s;
    c = 10;
    s = 10;
    ft_calloc(c,s);
}
*/