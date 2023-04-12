/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:51:31 by kcheong           #+#    #+#             */
/*   Updated: 2022/06/03 13:30:47 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*dest;
	size_t	slen;

	j = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (len > slen)
		len = slen;
	dest = ft_calloc(sizeof(char), (len + 1));
	if (!dest)
		return (NULL);
	if (start > slen)
		return (dest);
	while (s[start] && j < len)
	{
		dest[j] = s[start];
		j++;
		start++;
	}
	dest[j] = '\0';
	return (dest);
}

// int	main()
// {
// 	const char s[] = "Hello I am Koen.";
// 	printf("%s\n", ft_substr(s, 6, 16));
// }