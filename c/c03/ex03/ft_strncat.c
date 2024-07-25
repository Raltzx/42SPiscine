/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:08:42 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/23 09:50:02 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include<stdio.h>
int main(int argc, char *argv[])
{
	char s1[20] = "hello";
	char *s2 = " world";

	printf("s1 %s\n", s1);
	printf("s2 %s\n", s2);
	ft_strncat(s1, s2, 2);
	printf("Depois da funcao: %s\n", s1);
}
*/