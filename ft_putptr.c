/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberdal <aberdal@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-18 15:00:15 by aberdal           #+#    #+#             */
/*   Updated: 2026-02-18 15:00:15 by aberdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	p;

	count = 0;
	if (!ptr)
	{
		count = count + ft_putstr("(nil)");
		return (5);
	}
	else
	{
		p = (unsigned long)ptr;
		count = count + ft_putchar('0');
		count = count + ft_putchar('x');
		count = count + ft_puthex_low(p);
	}
	return (count);
}
