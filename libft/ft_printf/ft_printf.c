/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:09:26 by kcheong           #+#    #+#             */
/*   Updated: 2022/07/04 15:53:08 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(va_list args, const char *format, int i)
{
	int	c;

	c = 0;
	if (format[i] == 'c')
		c = ft_putchar(va_arg(args, int));
	if (format[i] == 's')
		c = ft_putstr(va_arg(args, char *));
	if (format[i] == 'd' || format[i] == 'i')
		ft_putnbr(va_arg(args, int), &c);
	if (format[i] == 'u')
		ft_unsigned_int(va_arg(args, unsigned int), &c);
	if (format[i] == '%')
		c = ft_putchar('%');
	if (format[i] == 'p')
	{
		c = ft_putstr("0x");
		ft_ptr(va_arg(args, unsigned long), &c);
	}
	if (format[i] == 'x')
		ft_hex(va_arg(args, unsigned int), &c);
	if (format[i] == 'X')
		ft_upperhex(va_arg(args, unsigned int), &c);
	return (c);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, format);
	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += check(args, format, i);
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
