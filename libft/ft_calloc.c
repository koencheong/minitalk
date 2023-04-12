/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:16:56 by kcheong           #+#    #+#             */
/*   Updated: 2022/06/03 21:35:15 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*temp;

	temp = malloc(size * count);
	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	if (!temp)
		return (NULL);
	ft_bzero(temp, count * size);
	return (temp);
}
