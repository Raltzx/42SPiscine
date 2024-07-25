/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:39:01 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/18 11:59:04 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_lowcase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (! *str)
		return (1);
	while (str[i] != '\0')
	{
		if (is_upercase(str[i]) || is_lowcase(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
//main para testes
/*
#include<stdio.h>
int main()
{
	char *one;
	char *zero;
	char *empty;

	one = "AoBa";
	zero = "!*a5R";
	empty = "";
	printf("string vazia: %s\nRetorno: %d\n",empty, ft_str_is_alpha(empty));
	printf("string com texto: %s\nRetorno: %d\n", one,ft_str_is_alpha(one));
	printf("string com simbolos: %s\nRetorno: %d\n", zero,ft_str_is_alpha(zero));

}
*/