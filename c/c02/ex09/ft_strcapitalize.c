/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:26:16 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/21 10:49:33 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_lowcase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_alpha(char c)
{
	return (is_number(c) || is_lowcase(c) || is_uppercase(c));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_alpha(str[i - 1]) && is_lowcase(str[i]))
			str[i] -= 32;
		else if (is_alpha(str[i - 1]) && is_uppercase(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}

/*
#include<stdio.h>
int main()
{
    char string[20] = "isso+eH uMa-string";
    
    printf("Antes: %s\n", string);
    ft_strcapitalize(string);
    printf("Depois: %s\n", string);
}
*/
