/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:44:19 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/23 09:53:32 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	get_string_length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = get_string_length(dest);
	src_len = get_string_length(src);
	if (dest_len >= size)
		return (src_len + size);
	i = 0;
	while (src[i] && i < (size - dest_len - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
#include<stdio.h>
int main(void)
{
	char	a[] = {"coxinha"};
	char	b[] = {"sorvete"};

	printf("destino: %s\n", a);
	printf("source: %s\n", b);
	printf("tamanho das strings: %d\n", ft_strlcat(a, b, 20));
	printf("destino: %s\n", a);
}
*/