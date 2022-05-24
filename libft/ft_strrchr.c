/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrpere <gabrpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:40:46 by gabrpere          #+#    #+#             */
/*   Updated: 2022/05/24 04:26:05 by gabrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{	
	char	*x;
	int		pos;

	pos = ft_strlen(src);
	x = (char *)src;
	while (pos >= 0 && x[pos] != (char)c)
		pos--;
	if (pos < 0 && (char)c != 0)
		return (NULL);
	return (x + pos);
}
