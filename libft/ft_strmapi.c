/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrpere <gabrpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 22:45:35 by gabrpere          #+#    #+#             */
/*   Updated: 2022/05/15 23:02:26 by gabrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		x;

	result = malloc(ft_strlen(s) + 1);
	if (!s)
		return (NULL);
	while (s[x] != 0)
	{
		result[x] = f(x, s[x]);
		x++;
	}
	result[x] = 0;
	return (result);
}
