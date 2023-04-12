/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 01:04:28 by kcheong           #+#    #+#             */
/*   Updated: 2022/06/24 01:04:28 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ptr(unsigned long n, int *nbr)
{
	if (n >= 16)
	{
		ft_ptr(n / 16, nbr);
		ft_ptr(n % 16, nbr);
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

// 	a = -1;
// 	printf("%p\n", a);
// 	ft_printf("%p\n", a);
// }
