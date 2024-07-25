/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:52:32 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/23 14:39:27 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	skipping_spaces(char c)
{
	return (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v');
}

int	is_sign(char c)
{
	return (c == '+' || c == '-');
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	while (str[i] && skipping_spaces(str[i]))
		i++;
	sign = 1;
	while (str[i] && is_sign(str[i]))
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	number = 0;
	while (str[i] && is_number(str[i]))
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (sign * number);
}
/*
#include<stdio.h>
int main()
{
	char str[] = " ---+--+1234ab567";
	int result = ft_atoi(str);

	printf("string: %s\n", str);
	printf("resultado: %d\n", result);	
}
*/