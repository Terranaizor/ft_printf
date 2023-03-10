/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradin <nradin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:57:44 by nradin            #+#    #+#             */
/*   Updated: 2023/01/19 19:33:34 by nradin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putstr(char *s)
{
	if (s)
		write(1, s, ft_strlen(s));
	else
	{
		write(1, "(null)", 6);
		return (6);
	}
	return (ft_strlen(s));
}
