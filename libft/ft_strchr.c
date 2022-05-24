/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrpere <gabrpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:23:26 by gabrpere          #+#    #+#             */
/*   Updated: 2022/05/24 04:29:18 by gabrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*x;
	int		pos;

	pos = 0;
	x = (char *)str;
	while (x[pos] != (char)c && x[pos] != '\0')
		pos++;
	if (x[pos] == '\0' && c != 0)
		return (NULL);
	return (x + pos);
}
