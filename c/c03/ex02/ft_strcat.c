/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:44:20 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/21 15:08:04 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
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
	ft_strcat(s1, s2);
	printf("Depois da funcao: %s\n", s1);
}
*/