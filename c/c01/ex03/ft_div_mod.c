/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:26:11 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/16 09:49:00 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//main para teste
/*
#include<stdio.h>

int main(void)
{
	int a = 25;
    int b = 10;
    int div;
    int mod;

    mod = 0;
    ft_div_mod(a, b, &div, &mod);
    printf("a: %d\nb: %d\n", a, b);
    printf("div: %d\nmod: %d\n", div, mod);    
    
	return 0;
}

*/