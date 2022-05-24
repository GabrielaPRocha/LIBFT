/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrpere <gabrpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 02:52:39 by gabrpere          #+#    #+#             */
/*   Updated: 2022/05/18 04:09:18 by gabrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	x;

	x = 0;
	if ((!str2 || ! str1) || str1 == str2)
		return (str1);
	if (str1 == NULL && str2 == NULL)
		return (NULL);
	if (str1 < str2)
	{
		while (x < n)
		{
			*((unsigned char *)str1 + x) = *((unsigned char *)str2 + x);
			x++;
		}
	}
	while (n > 0)
	{
		n--;
		*((unsigned char *)str1 + n) = *((unsigned char *)str2 + n);
	}
	return (str1);
}
