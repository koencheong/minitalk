/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:14:46 by kcheong           #+#    #+#             */
/*   Updated: 2022/06/01 15:14:46 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_count(char const *s, char c)
{
	size_t	words;
	size_t	i;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (words);
}

size_t	word_len(char const *s, char c, size_t i)
{
	size_t	wordlen;

	wordlen = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		wordlen++;
		i++;
	}
	return (wordlen);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	j;
	size_t	w;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	w = word_count(s, c);
	array = ft_calloc(sizeof(char *), (w + 1));
	if (!array)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			array[j++] = ft_substr(s, i, word_len(s, c, i));
			i += word_len(s, c, i);
		}
		else
			i++;
	}
	array[j] = 0;
	return (array);
}

// int main()
// {
//   char const *s = "___abc__def___";
//   char c = '_';
//   char **res = ft_split(s, c);

//   while (*res)
//   {
// 	printf("%s\n", *res);
// 	res++;
//   }
// }
