/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrpere <gabrpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 20:26:54 by gabrpere          #+#    #+#             */
/*   Updated: 2022/05/24 04:27:35 by gabrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*si;
	unsigned char	*findc;

	findc = NULL;
	si = (unsigned char *)str;
	while (n--)
	{
		if (*si == (unsigned char)c)
		{
			findc = si;
			break ;
		}
		si++;
	}
	return (findc);
}
