/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 21:05:18 by marvin            #+#    #+#             */
/*   Updated: 2023/04/02 21:05:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int main(void)
{
    ft_putchar('a');
    write(1, "\n", 1);
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    ft_putstr("irmão do jorel 42");
    write(1, "\n", 1);
    return(0);
}