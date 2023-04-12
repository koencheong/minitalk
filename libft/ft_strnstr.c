/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:51:10 by kcheong           #+#    #+#             */
/*   Updated: 2022/05/30 16:51:10 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	nlen;
	char	*hay;

	i = 0;
	hay = (char *)haystack;
	nlen = ft_strlen(needle);
	if (nlen == 0 || haystack == needle)
		return (hay);
	while (hay[i] != '\0' && i < len)
	{
		j = 0;
		while (hay[i] && needle[j] && hay[i + j] == needle[j] && i + j < len)
			j++;
		if (j == nlen)
			return (hay + i);
		i++;
	}
	return (0);
}

// int	main()
// {
// 	const char haystack[] = "Hello I am Koen.";
// 	const char needle[] = "Koen";
// 	printf("%s\n", strstr(haystack, needle));
// 	printf("%s\n", ft_strnstr(haystack, needle, 100));
// }