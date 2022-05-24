/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrpere <gabrpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 03:26:41 by gabrpere          #+#    #+#             */
/*   Updated: 2022/05/21 19:58:45 by gabrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	x;
	int	count_words_char;

	x = 0;
	count_words_char = 0;
	while (s[x] != 0)
	{
		while (s[x] == c && s[x] != 0)
			x++;
		if (s[x] != 0)
			count_words_char++;
		while (s[x] != c && s[x] != 0)
			x++;
	}
	return (count_words_char);
}

char	**ft_split(char const *s, char c)
{
	char	**lst_words;
	int		lst_len;
	int		i;
	int		start;
	int		end;

	i = 0;
	lst_len = count_words(s, c);
	lst_words = malloc((lst_len + 1) * sizeof(char *));
	if (lst_words == NULL)
		return (NULL);
	lst_words[lst_len] = NULL;
	start = 0;
	while (i < lst_len)
	{
		while (s[start] == c && s[start] != 0)
			start++;
		end = start;
		while (s[end] != c && s[end] != 0)
			end++;
		lst_words[i] = ft_substr(s, start, end - start);
		i++;
		start = end;
	}
	return (lst_words);
}
