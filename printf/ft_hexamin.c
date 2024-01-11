/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexamin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:51:12 by andalvar          #+#    #+#             */
/*   Updated: 2023/12/21 11:08:00 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexamin(unsigned int n)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_itoa_base(n, "0123456789abcdef");
	i = ft_putstr(str);
	free(str);
	return (i);
}
