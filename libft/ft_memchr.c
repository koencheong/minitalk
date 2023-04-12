/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:59:29 by kcheong           #+#    #+#             */
/*   Updated: 2022/05/30 15:59:29 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{	
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	const char s[] = "Hello, I am Koen.";
// 	int	c = ',';
// 	char *res1;
// 	char *res2;

// 	res1 = memchr(s, c, 3);
// 	printf("String after [%c] is [%s]\n", c, res1);
// 	res2 = ft_memchr(s, c, 3);
// 	printf("String after [%c] is [%s]\n", c, res1);
// }