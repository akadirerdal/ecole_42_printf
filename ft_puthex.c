/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberdal <aberdal@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-18 14:16:57 by aberdal           #+#    #+#             */
/*   Updated: 2026-02-18 14:16:57 by aberdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_puthex_low(unsigned long n)
{
	int		count;
	char	*base_low;

	count = 0;
	base_low = "0123456789abcdef";
	if (n >= 16)
		count = count + ft_puthex_low(n / 16);
	count = count + ft_putchar(base_low[n % 16]);
	return (count);
}

int	ft_puthex_up(unsigned long n)
{
	int		count;
	char	*base_up;

	count = 0;
	base_up = "0123456789ABCDEF";
	if (n >= 16)
		count = count + ft_puthex_up(n / 16);
	count = count + ft_putchar(base_up[n % 16]);
	return (count);
}
