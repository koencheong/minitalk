/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:35:49 by kcheong           #+#    #+#             */
/*   Updated: 2022/05/30 13:35:49 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (srclen);
	if (size < dstlen + 1)
		return (srclen + size);
	while ((src[i]) && ((dstlen + i) < size - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

// int	main()
// {
// 	char src[] = ", see you tmr";
// 	char dst[] = "Byebye";
// 	ft_strlcat(dst, src, 14);
// 	printf("%s\n", dst);
// }
