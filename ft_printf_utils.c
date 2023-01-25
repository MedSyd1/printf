/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:09:56 by mmoufid           #+#    #+#             */
/*   Updated: 2022/11/03 21:52:02 by mmoufid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

size_t	ft_putchar(int c)
	{
	size_t	len;

	len = write(1, &c, 1);
	return (len);
}

size_t	ft_putstr(const char *str)
{
	int		i;
	size_t	len;

	if (!str)
		str = "(null)";
	i = 0;
	len = ft_strlen(str);
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (len);
}

size_t	ft_putnb(int nb)
{
	long	l;
	size_t	count;

	count = 1;
	l = nb;
	if (l < 0)
	{
		count += ft_putchar('-');
		l *= -1;
	}
	if (l >= 10)
	{
		count += ft_putnb(l / 10);
		ft_putnb(l % 10);
	}
	else
		ft_putchar(l + '0');
	return (count);
}

size_t	ft_putnb_u(unsigned int l)
{
	size_t	count;

	count = 1;
	if (l >= 10)
	{
		count += ft_putnb(l / 10);
		ft_putnb(l % 10);
	}
	else
		ft_putchar(l + '0');
	return (count);
}
