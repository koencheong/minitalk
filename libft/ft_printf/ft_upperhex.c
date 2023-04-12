/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upperhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:31:36 by kcheong           #+#    #+#             */
/*   Updated: 2022/06/24 20:41:43 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_upperhex(unsigned int n, int *nbr)
{
	if (n >= 16)
	{
		ft_upperhex(n / 16, nbr);
		ft_upperhex(n % 16, nbr);
	}
	else if (n <= 9)
	{
		ft_putchar(n + '0');
		++*nbr;
	}
	else if (n > 9 && n < 16)
	{
		ft_putchar((n - 10) + 'A');
		++*nbr;
	}
}

// int	main()
// {
// 	int a;

// 	a = -10;
// 	printf("%X\n", a);
// 	ft_printf("%X\n", a);
// }
