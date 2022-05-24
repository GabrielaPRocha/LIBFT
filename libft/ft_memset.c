/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrpere <gabrpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 02:40:21 by gabrpere          #+#    #+#             */
/*   Updated: 2022/04/16 19:50:43 by gabrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			count;
	unsigned char	*x;

	x = (unsigned char *)str;
	count = 0;
	while (count < n)
	{
		*x = (unsigned char) c;
		x++;
		count++;
	}
	return (str);
}
