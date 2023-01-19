/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradin <nradin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:45:08 by nradin            #+#    #+#             */
/*   Updated: 2023/01/19 19:35:46 by nradin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

size_t	ft_strlen(const char *s);
int		ft_putnbr_base(size_t nbr, char *base);
int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_putnbr(int n);

#endif
