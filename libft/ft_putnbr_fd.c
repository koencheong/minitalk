/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:23:14 by kcheong           #+#    #+#             */
/*   Updated: 2022/06/06 14:47:16 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			ft_putchar_fd('2', fd);
			n = -147483648;
		}
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

// int main()
// {
// 	ft_putnbr_fd(123, 1);
// 	system("leaks putnbr_test.out");
// 	return (0);
// }

// void	ft_putnbr_fd(int n, int fd)
// {
// 	if (n < 0)
// 	{
// 		ft_putchar_fd('-', fd);
// 		if (n == -2147483648)
// 		{
// 			ft_putchar_fd('2', fd)
// 			n = -147483648;
// 		}
// 		n = -n;
// 	}
// 	while (n > 0)
// 	{
// 		ft_putnbr_fd(n / 10, fd);
// 		ft_putchar_fd((n % 10) + '0', fd);
// 	}
// }
