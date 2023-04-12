/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:32:33 by kcheong           #+#    #+#             */
/*   Updated: 2022/05/25 16:42:01 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/* int	main()
{
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('!'));
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint('D'));
	printf("%d\n", ft_isprint('~'));
	printf("%d\n", ft_isprint(127));
	printf("%d\n", isprint(' '));
	printf("%d\n", isprint('!'));
	printf("%d\n", isprint('a'));
	printf("%d\n", isprint('D'));
	printf("%d\n", isprint('~'));
	printf("%d\n", isprint(127));
}
*/
