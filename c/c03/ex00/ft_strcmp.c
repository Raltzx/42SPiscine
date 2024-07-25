/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:23:48 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/21 14:43:41 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
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
	printf("comparacao s1 e s2 %d\n", ft_strcmp(s1, s2));
	printf("comparacao s1 e s3 %d\n", ft_strcmp(s1, s3));
	printf("comparacao s1 e s1 %d\n", ft_strcmp(s1, s1));
}
*/