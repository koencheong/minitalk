/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:41:44 by kcheong           #+#    #+#             */
/*   Updated: 2022/06/24 20:40:01 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex(unsigned int n, int *nbr)
{
	if (n >= 16)
	{
		ft_hex(n / 16, nbr);
		ft_hex(n % 16, nbr);
	}
	else if (n <= 9)
	{
		ft_putchar(n + '0');
		++*nbr;
	}
	else if (n > 9 && n < 16)
	{
		ft_putchar((n - 10) + 'a');
		++*nbr;
	}
}

// int	main()
// {
// 	int a;

// 	a = 10;
// 	printf("%x\n", a);
// 	ft_printf("%x\n", a);
// }
