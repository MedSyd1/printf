/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:34:08 by mmoufid           #+#    #+#             */
/*   Updated: 2022/11/04 15:34:12 by mmoufid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_putarg(char c, int *count, va_list sptr)
{
	if (c == 'd' || c == 'i')
		*count += ft_putnb(va_arg(sptr, int));
	if (c == 'c')
		*count += ft_putchar(va_arg(sptr, int));
	if (c == 's')
		*count += ft_putstr(va_arg(sptr, char *));
	if (c == 'u')
		*count += ft_putnb_u(va_arg(sptr, unsigned int));
	if (c == 'x')
		*count += ft_putnb_hex(va_arg(sptr, unsigned int));
	if (c == 'X')
		*count += ft_putnb_hexu(va_arg(sptr, unsigned int));
	if (c == 'p')
	{
		*count += ft_putstr("0x");
		*count += ft_putnb_p(va_arg(sptr, unsigned long int));
	}
	if (c == '%')
		*count += write(1, "%%", 1);
}

int	ft_printf(const char *s, ...)
{
	int		count;
	int		i;
	va_list	sptr;

	i = 0;
	count = 0;
	va_start(sptr, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			ft_putarg(s[i], &count, sptr);
		}
		else
		{
			count += ft_putchar(s[i]);
		}
		i++;
	}
	va_end(sptr);
	return (count);
}
