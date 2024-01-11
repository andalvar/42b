/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:53:12 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/21 19:36:45 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_char(char *s, unsigned int num, long int len)
{
	while (num > 0)
	{
		s[len--] = 48 + (num % 10);
		num = num / 10;
	}
	return (s);
}

static long int	ft_size(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char				*s;
	long int			len;
	unsigned int		num;
	int					sign;

	sign = 1;
	len = ft_size(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!(s))
		return (NULL);
	s[len--] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		num = n * -1;
		s[0] = '-';
	}
	else
		num = n;
	s = ft_char(s, num, len);
	return (s);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(132123));
// 	return (0);
// }
