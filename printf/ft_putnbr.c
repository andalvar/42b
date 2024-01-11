/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 00:10:01 by andalvar          #+#    #+#             */
/*   Updated: 2023/12/21 11:53:27 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_negative(int *value)
{
	int	i;

	i = 0;
	if (*value == INT_MIN)
	{
		i = 1;
		ft_putchar('-');
		ft_putchar('2');
		*value = 147483648;
		i++;
	}
	else if (*value < 0)
	{
		ft_putchar('-');
		*value *= -1;
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	char	*str;
	int		i;

	i = ft_negative(&n);
	str = ft_itoa_base(n, "0123456789");
	i = i + ft_putstr(str);
	free(str);
	return (i);
}
