/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:26:18 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/25 10:40:52 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i <= nb && i <= 46340)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include<stdio.h>
int main(void)
{
    int a = 1;

    printf("%d eh primo: %d\n", a, ft_is_prime(a));
}
*/