/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:03:53 by kcheong           #+#    #+#             */
/*   Updated: 2022/06/04 21:50:37 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*temp;
	size_t	i;
	size_t	s1len;

	i = 0;
	s1len = ft_strlen(s1);
	temp = malloc(sizeof(char) * (s1len + 1));
	if (!temp)
		return (NULL);
	while (s1[i])
	{
		temp[i] = s1[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

// int	main()
// {
// 	const char s1[] = "Hello";
// 	printf("%s\n", ft_strdup(s1));
// 	printf("%s\n", strdup(s1));
// }
