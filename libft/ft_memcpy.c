/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrpere <gabrpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:21:37 by gabrpere          #+#    #+#             */
/*   Updated: 2022/05/24 04:21:07 by gabrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	x;
	unsigned char	*destx;
	unsigned char	*srcx;

	x = 0;
	destx = (unsigned char *)dest;
	srcx = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (n == 0)
		return (dest);
	while (x < n)
	{
		destx[x] = srcx[x];
		x++;
	}
	return (dest);
}
