/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrpere <gabrpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:05:15 by gabrpere          #+#    #+#             */
/*   Updated: 2022/05/24 04:29:49 by gabrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int	len;

	if (n < 0)
		len = 2;
	else
		len = 1;
	while (n >= 10 || n <= -10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*number_char;
	int		len;

	len = num_len(n);
	number_char = (char *)malloc(sizeof(char) * (len + 1));
	if (number_char == NULL)
		return (NULL);
	number_char[len] = '\0';
	if (n < 0)
	{
		number_char[0] = '-';
		len--;
	}
	while (len-- > 0)
	{
		if (n < 0)
			number_char[len + 1] = '0' + n % 10 * (-1);
		else
			number_char[len] = '0' + n % 10;
		n = n / 10;
	}
	return (number_char);
}
