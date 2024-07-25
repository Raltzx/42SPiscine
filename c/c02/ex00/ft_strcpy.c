/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:19:47 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/21 10:37:11 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strcpy(char *dest, char *src)
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
/*
#include<stdio.h>
int main(void)
{
    char str_src[] = {"blablabla"};
    char str_dest[] = {"blublublu"};

    printf("testo base: %s\n\n", str_src);
    printf("antes da copia: %s\n", str_dest);
    ft_strcpy(str_dest, str_src);
    printf("dps da copia: %s\n", str_dest);

    return 0;
}
*/