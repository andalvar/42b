/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:40:08 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/22 14:44:07 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *)s1;
	i = 0;
	str2 = (char *)malloc(ft_strlen(str1) + 1);
	if (str2 == NULL)
		return (NULL);
	while (str1[i] != '\0')
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}

// int main() {
// 	const char *s1 = "Hola, mundo!";
// 	char *s2 = ft_strdup(s1);

// 	if (s2 != NULL) 
// 	{
// 		printf("Copia: %s\n", s2);
// 		free(s2);
// 	} 
// 	else 
// 	{
// 		printf("Nah\n");
// 	}
// 	return (0);
// }