/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrpere <gabrpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:23:28 by gabrpere          #+#    #+#             */
/*   Updated: 2022/05/24 04:20:14 by gabrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	copystr(char *dest, char const *src, int newpos)
{
	int	lensrc;
	int	pos;

	lensrc = ft_strlen(src);
	pos = 0;
	while (pos < lensrc)
	{
		dest[newpos] = src[pos];
		newpos++;
		pos++;
	}
	return (newpos);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		newpos;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	newpos = 0;
	new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	newpos = copystr(new, s1, newpos);
	newpos = copystr(new, s2, newpos);
	new[newpos] = '\0';
	return (new);
}
