/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:06:46 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/22 12:30:44 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src = s;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
			return ((void *)src + i);
		else
			i++;
	}
	return (NULL);
}

// int main () 
// {
//    const char str[] = "Hello. World!";
//    const char ch = '.';
//    char *s2;

//    s2 = ft_memchr(str, ch, strlen(str));

//    printf("%s\n",s2);

//    return(0);
// }