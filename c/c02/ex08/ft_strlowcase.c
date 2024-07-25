/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:22:44 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/18 13:25:33 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_uppercase(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include<stdio.h>
int main()
{
	char one[6] = "aaaBB";
	char zero[6] = "BBBaa";
	char empty[6] = "!@Mnf";

    printf("texto: %s\n", one);
    printf("texto: %s\n", zero);
    printf("texto: %s\n", empty);
    ft_strlowcase(one);
    ft_strlowcase(zero);
    ft_strlowcase(empty);
    printf("\n");
    printf("texto: %s\n", one);
    printf("texto: %s\n", zero);
    printf("texto: %s\n", empty);
}
*/