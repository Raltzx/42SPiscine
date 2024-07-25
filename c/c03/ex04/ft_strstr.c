/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:12:24 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/23 12:23:03 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!*to_find)
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (!to_find[j + 1])
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}

#include<stdio.h>
int main(int argc, char *argv[])
{
	char s1[20] = "hello world";
	char *s2 = "world";

	printf("s1 %s\n", s1);
	printf("s2 %s\n", s2);
	char *result = ft_strstr(s1, s2);
	printf("Encontrei: %s\n", result);
}
