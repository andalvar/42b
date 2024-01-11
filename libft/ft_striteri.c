/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:24:58 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/22 15:03:20 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

// char my_func(unsigned int i, char str)
//  {
//  	printf("%d and %c\n", i, str);
//  	return str - 32;
//  }

//  int main()
// {
//  	char str[10] = "hello.";

//  	char *result = ft_strmapi(str, my_func);
//  	printf("The result is %s\n", result);
// 	return 0;
//  }