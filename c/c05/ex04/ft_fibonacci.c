/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:09:25 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/25 10:18:41 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_sign(int n)
{
	return ((n > 0) - (n < 0));
}

int	ft_fibonacci(int index)
{
	if (index < 2)
		return (get_sign(index));
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include<stdio.h>
int main(void)
{
    int a = 3;
    printf("fibonacci(%d) = %d\n", a, ft_fibonacci(a));

    return (0);
}
*/