/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:48:22 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/22 12:29:07 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

// int main()	
// {
// 	const char str[] = "aaa.Hello. World!";
// 	const char c = '.';
// 	char *s2;

//    s2 = ft_strrchr(str, c);

//    printf("|%c| is - |%s|\n", c, s2);
//    return(0);
// }