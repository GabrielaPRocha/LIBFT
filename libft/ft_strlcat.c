/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrpere <gabrpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:41:44 by gabrpere          #+#    #+#             */
/*   Updated: 2022/05/18 02:07:15 by gabrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat( char *dst, const char *src, size_t siz)
{
	size_t	dstx;
	size_t	srcx;
	size_t	x;

	dstx = ft_strlen(dst);
	srcx = ft_strlen(src);
	x = 0;
	if (siz < dstx + 1)
		return (siz + srcx);
	if (siz > dstx + 1)
	{
		while (src[x] != '\0' && dstx + 1 + x < siz)
		{
			dst[dstx + x] = src[x];
			x++;
		}
	}
	dst[dstx + x] = '\0';
	return (dstx + srcx);
}
