/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:48:49 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/18 10:38:22 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

//main para testes
/*
#include<stdio.h>

int	main()
{
	char	dest[5];
	char	src[5] = "Aoba";
    int n = 2;
	
	ft_strncpy(dest, src, n);
	
	printf("SRC: %s\n", src);
    printf("n: %d\n", n);
	printf("DEST: %s\n", dest);

	return 0;
	
}
*/
