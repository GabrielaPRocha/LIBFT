/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrpere <gabrpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 03:04:19 by gabrpere          #+#    #+#             */
/*   Updated: 2022/05/24 04:18:07 by gabrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char const *s1, char const *s2, unsigned int n)
{
	unsigned char	*x1;
	unsigned char	*x2;

	x1 = (unsigned char *)s1;
	x2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n != 0 && *x1 != '\0' && *x2 != '\0')
	{
		if (*x1 != *x2)
			return (*x1 - *x2);
		x1++;
		x2++;
		n--;
	}
	if (*x1 == 0 || *x2 == 0)
		return (*x1 - *x2);
	return (0);
}
