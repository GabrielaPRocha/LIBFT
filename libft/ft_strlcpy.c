/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrpere <gabrpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:56:00 by gabrpere          #+#    #+#             */
/*   Updated: 2022/05/24 04:28:03 by gabrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char const *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	x;

	count = ft_strlen(src);
	x = 0;
	if (size <= 0)
		return (count);
	while (src[x] != '\0' && x < (size - 1))
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (count);
}
