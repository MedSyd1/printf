/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:11:18 by mmoufid           #+#    #+#             */
/*   Updated: 2022/11/04 16:11:21 by mmoufid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
size_t	ft_strlen(const char *str);
size_t	ft_putchar(int c);
size_t	ft_putstr(const char *str);
size_t	ft_putnb(int nb);
size_t	ft_putnb_u(unsigned int l);
size_t	ft_putnb_hex(unsigned int nb);
size_t	ft_putnb_hexu(unsigned int nb);
size_t	ft_putnb_p(unsigned long int nb);

#endif
