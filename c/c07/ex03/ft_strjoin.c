/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:22:48 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/28 14:21:44 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	string_get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	string_get_cat_length(char **strs, char *sep, int size)
{
	int	i;
	int	sep_len;
	int	total_len;

	sep_len = string_get_length(sep);
	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += string_get_length(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	return (total_len);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*cat_string;
	int		i;
	int		total_len;

	total_len = string_get_cat_length(strs, sep, size) + 1;
	cat_string = malloc(sizeof(char) * total_len);
	*cat_string = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(cat_string, strs[i]);
		if (i < size - 1)
			ft_strcat(cat_string, sep);
		i++;
	}
	return (cat_string);
}
/*
#include<stdio.h>

int main(void)
{
	char *str[] = {"a", "b", "cavalo", "c"};
	char sep[] = {"|"};

	char *strs = ft_strjoin(4, str, sep);
	printf("%s\n", strs);
    free(strs);
}
*/