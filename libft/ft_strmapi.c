/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 21:11:55 by kcheong           #+#    #+#             */
/*   Updated: 2022/06/04 12:54:44 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*array;

	i = -1;
	if (!s)
		return (0);
	array = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!array)
		return (NULL);
	while (s[++i])
		array[i] = f(i, (char)s[i]);
	array[i] = '\0';
	return (array);
}
