/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:32:11 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/22 14:36:38 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i])
		i++;
	if (i >= n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include<stdio.h>
int main(int argc, char *argv[])
{
	char *s1 = "hello";
	char *s2 = "hello world";
	char *s3 = "he";

	printf("s1 %s\n", s1);
	printf("s2 %s\n", s2);
	printf("s3 %s\n", s3);
	printf("comparacao s1 e s2 %d\n", ft_strncmp(s1, s2, 10));
	printf("comparacao s1 e s3 %d\n", ft_strncmp(s1, s3, 5));
	printf("comparacao s1 e s1 %d\n", ft_strncmp(s1, s1, 10));
}
*/