/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:00:11 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/25 10:26:05 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 1)
		return (!nb);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include<stdio.h>
int main(void)
{
	int	a = -2;

	printf("%d! eh %d\n", a, ft_recursive_factorial(a));
}
*/