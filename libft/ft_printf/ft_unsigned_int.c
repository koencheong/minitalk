/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 00:53:03 by kcheong           #+#    #+#             */
/*   Updated: 2022/06/24 00:53:03 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned_int(unsigned int n, int *nbr)
{
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
