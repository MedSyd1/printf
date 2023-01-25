/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putnb.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:46:49 by mmoufid           #+#    #+#             */
/*   Updated: 2022/11/03 22:05:03 by mmoufid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define BASEL "0123456789abcdef"
#define BASEU "0123456789ABCDEF"

size_t	ft_putnb_hex(unsigned int nb)
{
	size_t	count;

	count = 1;
	if (nb >= 16)
	{
		count += ft_putnb_hex(nb / 16);
		ft_putnb_hex(nb % 16);
	}
	else
		ft_putchar(BASEL[nb]);
	return (count);
}

size_t	ft_putnb_hexu(unsigned int nb)
{
	size_t	count;

	count = 1;
	if (nb >= 16)
	{
		count += ft_putnb_hexu(nb / 16);
		ft_putnb_hexu(nb % 16);
	}
	else
		ft_putchar(BASEU[nb]);
	return (count);
}

size_t	ft_putnb_p(unsigned long int nb)
{
	size_t	count;

	count = 1;
	if (nb >= 16)
	{
		count += ft_putnb_p(nb / 16);
		ft_putnb_p(nb % 16);
	}
	else
		ft_putchar(BASEL[nb]);
	return (count);
}
