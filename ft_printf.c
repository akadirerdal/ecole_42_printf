/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberdal <aberdal@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-18 12:17:38 by aberdal           #+#    #+#             */
/*   Updated: 2026-02-18 12:17:38 by aberdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *c, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!c)
		return (-1);
	i = 0;
	count = 0;
	va_start(args, c);
	while (c[i])
	{
		if (c[i] == '%' && !c[i + 1])
		{
			va_end(args);
			return (-1);
		}
		if (c[i] == '%' && c[i + 1])
		{
			count = count + ft_format(c[i + 1], args);
			i = i + 2;
		}
		else
		{
			count = count + ft_putchar(c[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}
