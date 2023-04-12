/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:23:14 by kcheong           #+#    #+#             */
/*   Updated: 2022/06/24 00:48:09 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *nbr)
{
	if (n < 0)
	{
		ft_putchar('-');
		++*nbr;
		if (n == -2147483648)
		{
			ft_putchar('2');
			++*nbr;
			n = -147483648;
		}
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10, nbr);
		ft_putchar((n % 10) + '0');
		++*nbr;
	}
	else
	{
		ft_putchar(n + '0');
		++*nbr;
	}
}
