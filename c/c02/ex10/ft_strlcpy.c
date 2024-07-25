/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:16:16 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/18 14:37:46 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	lengh;
	int	i;

	lengh = 0;
	while (src[lengh] != '\0')
		lengh++;
	i = 0;
	if (size)
	{
		while ((i < (size - 1)) && lengh && (src[i] != '\0'))
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (lengh);
}
/*
#include<stdio.h>
int	main()
{
	char dest[50];
    char src[] = "o rato roeu a roupa do rei de roma";

    printf("source: %s\n", src);
    printf("lengh: %d\n", ft_strlcpy(dest, src, 20));
    printf("destine: %s\n", dest);
}
*/
