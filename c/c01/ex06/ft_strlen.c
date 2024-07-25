/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:17:27 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/16 11:53:50 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

//main para teste
/*
#include<stdio.h>
int main(void)
{
    int a;
    char *str;

    str = "blabla";
	a = ft_strlen(str);
    printf("tamanho da string: %d\n", a);
	return 0;
}
*/
