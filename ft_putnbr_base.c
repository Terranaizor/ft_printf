/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradin <nradin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:52:16 by nradin            #+#    #+#             */
/*   Updated: 2023/01/19 19:32:25 by nradin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr_base(size_t nbr, char *base)
{
	size_t		size;
	size_t		i;
	char		output[65];

	i = 0;
	size = ft_strlen(base);
	while (nbr > 0 || i == 0)
	{
		output[i] = base[nbr % size];
		nbr = nbr / size;
		i++;
	}
	size = i;
	while (i-- > 0)
	{
		write(1, &output[i], 1);
	}
	return (size);
}
