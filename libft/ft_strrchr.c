/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:29:48 by kcheong           #+#    #+#             */
/*   Updated: 2022/05/30 15:29:49 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	while (i >= 0)
	{	
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

// int	main()
// {
// 	const char s[] = "http://www.tutorialspoint.com";
// 	unsigned char c = '.';
// 	char *res1;
// 	char *res2;

// 	res1 = strrchr(s, c);
// 	printf("String after [%c] is [%s]\n", c, res1);
// 	res2 = ft_strrchr(s, c);
// 	printf("String after [%c] is [%s]\n", c, res1);
// }