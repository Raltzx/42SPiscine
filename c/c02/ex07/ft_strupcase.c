/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:55:07 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/18 13:20:53 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowcase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_lowcase(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include<stdio.h>
int main()
{
	char one[6] = "aaaaa";
	char zero[6] = "BBBaa";
	char empty[6] = "!@Mnf";

    printf("texto: %s\n", one);
    printf("texto: %s\n", zero);
    printf("texto: %s\n", empty);
    ft_strupcase(one);
    ft_strupcase(zero);
    ft_strupcase(empty);
    printf("\n");
    printf("texto: %s\n", one);
    printf("texto: %s\n", zero);
    printf("texto: %s\n", empty);
}
*/
