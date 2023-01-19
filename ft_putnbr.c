/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradin <nradin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:01:59 by nradin            #+#    #+#             */
/*   Updated: 2023/01/19 19:34:16 by nradin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	count_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static char	*ft_itoa(int n)
{
	int		i;
	long	n_long;
	int		size;
	char	*res;

	size = count_size(n);
	res = (char *)malloc(size + 1);
	i = size - 1;
	n_long = n;
	if (n_long == 0)
		*res = '0';
	else if (n_long < 0)
	{
		*res = '-';
		n_long = -n_long;
	}
	while (n_long != 0)
	{
		*(res + i) = n_long % 10 + 48;
		n_long /= 10;
		i--;
	}
	*(res + size) = 0;
	return (res);
}

int	ft_putnbr(int n)
{
	char	*nbr;
	int		size;

	nbr = ft_itoa(n);
	size = ft_strlen(nbr);
	write(1, nbr, size);
	free(nbr);
	return (size);
}
