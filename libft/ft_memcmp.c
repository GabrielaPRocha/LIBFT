/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrpere <gabrpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 20:38:37 by gabrpere          #+#    #+#             */
/*   Updated: 2022/05/24 04:44:25 by gabrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			x;
	unsigned char	*str1x;
	unsigned char	*str2x;

	x = 0;
	str1x = (unsigned char *)str1;
	str2x = (unsigned char *)str2;
	while (x < n)
	{
		if (str1x[x] != str2x[x])
			return (str1x[x] - str2x[x]);
		x++;
	}
	return (0);
}
