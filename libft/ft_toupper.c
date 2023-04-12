/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:05:49 by kcheong           #+#    #+#             */
/*   Updated: 2022/05/24 18:05:49 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	return (c);
}

/* int	main()
{
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('D'));
	printf("%c\n", ft_toupper('h'));
	printf("%c\n", ft_toupper('K'));
	printf("%c\n", ft_toupper('1'));
	printf("%c\n", ft_toupper('~'));
	printf("%c\n", toupper('a'));
	printf("%c\n", toupper('D'));
	printf("%c\n", toupper('h'));
	printf("%c\n", toupper('K'));
	printf("%c\n", toupper('1'));
	printf("%c\n", toupper('~'));
}
*/
