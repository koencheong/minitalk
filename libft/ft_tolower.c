/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:17:24 by kcheong           #+#    #+#             */
/*   Updated: 2022/05/24 18:17:24 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
	return (c);
}

/* int	main()
{
	printf("%c\n", ft_tolower('a'));
	printf("%c\n", ft_tolower('D'));
	printf("%c\n", ft_tolower('h'));
	printf("%c\n", ft_tolower('K'));
	printf("%c\n", ft_tolower('1'));
	printf("%c\n", ft_tolower('~'));
	printf("%c\n", tolower('a'));
	printf("%c\n", tolower('D'));
	printf("%c\n", tolower('h'));
	printf("%c\n", tolower('K'));
	printf("%c\n", tolower('1'));
	printf("%c\n", tolower('~'));
}
*/