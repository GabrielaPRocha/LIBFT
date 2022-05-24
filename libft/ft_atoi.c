/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrpere <gabrpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 22:49:21 by gabrpere          #+#    #+#             */
/*   Updated: 2022/05/24 04:56:56 by gabrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	num;
	int				x;
	int				result;

	result = 1;
	x = 0;
	num = 0;
	while (str[x] == ' ' || str[x] == '\t' || str[x] == '\f'
		|| str[x] == '\r' || str[x] == '\n' || str[x] == '\v')
		x++;
	if (str[x] == '+' || str[x] == '-')
	{
		if (str[x++] == '-')
			result = -1;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		num = num * 10 + (str[x] - '0');
		x++;
	}
	result *= num;
	return (result);
}
