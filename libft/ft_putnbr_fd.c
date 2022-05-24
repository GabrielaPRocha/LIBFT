/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrpere <gabrpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:39:03 by gabrpere          #+#    #+#             */
/*   Updated: 2022/05/12 16:56:46 by gabrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_positive(int nb, int fd)
{
	write(fd, "-", 1);
	if (nb == -2147483648)
	{
		write(fd, "2", 1);
		nb = -147483648;
	}
	return (nb - nb - nb);
}

void	ft_putnbr_fd(int nb, int fd)
{
	char	number;

	if (nb == 2147483647)
	{
		write(fd, "2", 1);
	}
	if (nb < 0)
		nb = ft_positive(nb, fd);
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		number = (nb % 10) + '0';
		write(fd, &number, 1);
	}
	else
	{
		number = nb + '0';
		write(fd, &number, 1);
	}
}
