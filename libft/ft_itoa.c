/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 12:59:01 by kcheong           #+#    #+#             */
/*   Updated: 2022/06/04 17:02:02 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_int(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*store_nbr(int n, int count, char *array)
{
	if (n == 0)
		array[0] = '0';
	array[count] = '\0';
	if (n < 0)
	{
		array[0] = '-';
		if (n == -2147483648)
		{
			array[1] = '2';
			n = -147483648;
		}
		n = -n;
	}
	while (n > 0)
	{
		array[--count] = (n % 10) + '0';
		n /= 10;
	}
	return (array);
}

char	*ft_itoa(int n)
{
	char	*array;
	int		count;

	count = count_int(n);
	array = malloc(sizeof(char) * (count + 1));
	if (!array)
		return (NULL);
	return (store_nbr(n, count, array));
}

// int	main()
// {
// 	int	n = 0;
// 	printf("%d\n", count_int(n));
// 	char *str = ft_itoa(n);
// 	printf("%s\n", str);
// }