/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberdal <aberdal@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-18 12:27:25 by aberdal           #+#    #+#             */
/*   Updated: 2026-02-18 12:27:25 by aberdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(int c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = count + ft_putchar(va_arg(args, int));
	else if (c == 'd' || c == 'i')
		count = count + ft_putnbr(va_arg(args, int));
	else if (c == 's')
		count = count + ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		count = count + ft_putptr(va_arg(args, void *));
	else if (c == 'u')
		count = count + ft_unsigned(va_arg(args, unsigned int));
	else if (c == 'X')
		count = count + ft_puthex_up(va_arg(args, unsigned int));
	else if (c == 'x')
		count = count + ft_puthex_low(va_arg(args, unsigned int));
	else if (c == '%')
		count = count + ft_putchar('%');
	else
		count = count + ft_putchar('%') + ft_putchar(c);
	return (count);
}
