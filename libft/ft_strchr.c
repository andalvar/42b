/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:59:16 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/22 19:39:14 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str && *str != (unsigned char)c)
		str++;
	if ((unsigned char)c == *str)
		return (str);
	return (NULL);
}

// int main()
// {
// 	const char str[] = "Hello, World!";
// 	char *s2;

// 	s2 = ft_strchr(str, 'o' + 256);

// 	printf(" %s, |%c| \n", s2, 'o' + 256);
// 	return(0);
// }