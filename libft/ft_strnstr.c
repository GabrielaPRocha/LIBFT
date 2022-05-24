/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrpere <gabrpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:05:40 by gabrpere          #+#    #+#             */
/*   Updated: 2022/05/18 03:34:06 by gabrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	bigx;
	unsigned int	littlex;

	bigx = 0;
	if (*little == 0)
		return ((char *)big);
	while (big[bigx] != '\0')
	{
		littlex = 0;
		while (big[bigx + littlex] == little[littlex] && (bigx + littlex) < len)
		{
			if (little[littlex + 1] == 0)
				return ((char *) big + bigx);
			littlex++;
		}
		bigx++;
	}
	return (NULL);
}
