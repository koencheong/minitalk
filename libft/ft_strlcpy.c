/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:08:06 by kcheong           #+#    #+#             */
/*   Updated: 2022/06/04 21:49:31 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen((char *) src);
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}

/*int	main()
{
	const char	src[] = "Hello I am Koen.";
	char	dst[1000];
	int	r;
	r = strlcpy(dst, src, 17);
	printf("Return %3i. %s\n", r, dst);
	r = ft_strlcpy(dst, src, 17);
	printf("Return %3i. %s\n", r, dst);

	r = strlcpy(dst, src, 10);
	printf("Return %3i. %s\n", r, dst);
	r = ft_strlcpy(dst, src, 10);
	printf("Return %3i. %s\n", r, dst);

	r = strlcpy(dst, src, 20);
	printf("Return %3i. %s\n", r, dst);
	r = ft_strlcpy(dst, src, 20);
	printf("Return %3i. %s\n", r, dst);
}*/
