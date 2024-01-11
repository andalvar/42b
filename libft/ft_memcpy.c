/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:24:28 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/22 15:20:01 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int					i;
	unsigned char		*p;
	const unsigned char	*a = src;

	p = dst;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while ((size_t)i < n)
	{
		p[i] = a[i];
		i++;
	}
	return (dst);
}

// int main()
// {
//     char src[] = "Hola";
//     char dst[10];

//     printf("%s\n", ft_memcpy(dst, src, 3));

//     return (0);
// }