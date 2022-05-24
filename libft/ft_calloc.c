/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrpere <gabrpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:59:35 by gabrpere          #+#    #+#             */
/*   Updated: 2022/05/24 04:31:37 by gabrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*result;
	size_t	n_alok;

	n_alok = size * nitems;
	if (size > __SIZE_MAX__ / nitems)
		return (NULL);
	result = malloc(n_alok);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, n_alok);
	return (result);
}
