/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 20:20:35 by marvin            #+#    #+#             */
/*   Updated: 2023/04/02 20:20:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	c;

	c = 0;
	i = -1;
	if (!s)
		c += ft_putstr("(null)");
	else
	{
		while (s[++i])
			c += ft_putchar(s[i]);
	}
	return (c);
}
