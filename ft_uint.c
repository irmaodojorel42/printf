/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 21:59:46 by marvin            #+#    #+#             */
/*   Updated: 2023/04/09 21:59:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_uint(unsigned int n)
{
    int c;

    c = 0;
    if(n >= 10)
    {
        c += ft_uint(n / 10);
        c += ft_uint(n % 10);
    }
    else
        c += ft_putchar(n + '0');
    return(c);
}