/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberdal <aberdal@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-18 12:17:31 by aberdal           #+#    #+#             */
/*   Updated: 2026-02-18 12:17:31 by aberdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_format(int c, va_list args);
int	ft_printf(const char *c, ...);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_unsigned(unsigned int n);
int	ft_puthex_low(unsigned long n);
int	ft_puthex_up(unsigned long n);
int	ft_putptr(void *ptr);

#endif