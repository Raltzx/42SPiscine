/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:58:45 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/23 11:45:47 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

//main para teste

#include<stdio.h>
int main(void)
{
	int a = 50;
    int b = 10;

    printf("a: %d\nb: %d\n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("a: %d\nb: %d\n", a, b);

	return 0;
}
