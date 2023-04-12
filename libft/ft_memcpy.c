/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:22:32 by kcheong           #+#    #+#             */
/*   Updated: 2022/05/24 18:22:32 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dest)
		return (0);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

/*int	main()
{
	char dest[50] = "";
	const char src[50] = "Byebye";
	strcpy(dest,"Heloooo!!");
	printf("%s\n", dest);
	memcpy(dest, src, strlen(src)+1);
	printf("%s\n", dest);
	printf("%s\n", dest);
	ft_memcpy(dest, src, strlen(src)+1);
	printf("%s\n", dest);
	memcpy(dest, src, strlen(src)+1);
	printf("%s\n", dest);
}*/