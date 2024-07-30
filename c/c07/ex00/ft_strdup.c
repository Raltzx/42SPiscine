/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:44:19 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/28 14:18:49 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = NULL;
	dest = malloc(sizeof(char) * get_length(src)+1);
	if (dest == NULL)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	char a[] = {"pacoca com limao"};
	char *b;

	b = ft_strdup(a);
	printf("%s\n", b);
}
*/