/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:33:36 by amessah           #+#    #+#             */
/*   Updated: 2021/11/05 09:54:21 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    unsigned int n1;
    
    n1 = n;
    if(n1 < 0)
    {
        ft_putchar_fd('-',fd);
        n1 = n * (-1);
    }
    if(n1 > 9)
    {
        ft_putnbr_fd(n1 / 10,fd);
        ft_putnbr_fd(n1 % 10,fd);
    }
    else
        ft_putchar_fd(n1 + '0',fd);
}