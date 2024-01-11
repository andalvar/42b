/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:48:32 by andalvar          #+#    #+#             */
/*   Updated: 2023/12/21 12:22:12 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_negative(unsigned int *value)
{
	int	i;

	i = 0;
	if ((int)*value == INT_MAX)
	{
		ft_putchar('2');
		*value = 147483647;
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

int	ft_putunbr(unsigned int n)
{
	int		i;
	char	*str;

	i = ft_negative(&n);
	str = ft_itoa_base(n, "0123456789");
	i = i + ft_putstr(str);
	free(str);
	return (i);
}
