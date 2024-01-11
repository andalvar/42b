/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:07:47 by andalvar          #+#    #+#             */
/*   Updated: 2023/12/29 11:04:50 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(va_list ar, const char s)
{
	int		i;

	i = 0;
	if (s == 'c')
		i = ft_putchar(va_arg(ar, int));
	else if (s == 's')
		i = ft_putstr(va_arg(ar, char *));
	else if (s == 'p')
		i = ft_ptr(va_arg(ar, void *));
	else if (s == 'd' || s == 'i')
		i = ft_putnbr(va_arg(ar, long));
	else if (s == 'u')
		i = ft_putunbr(va_arg(ar, unsigned long));
	else if (s == 'x')
		i = ft_hexamin(va_arg(ar, unsigned int));
	else if (s == 'X')
		i = ft_hexamay(va_arg(ar, unsigned int));
	else if (s == '%')
		i = ft_por();
	return (i);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	ar;

	i = 0;
	count = 0;
	va_start(ar, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			count += ft_type(ar, s[i + 1]);
			i++;
		}
		else
		{
			count += ft_putchar(s[i]);
		}
		i++;
	}
	va_end(ar);
	return (count);
}
