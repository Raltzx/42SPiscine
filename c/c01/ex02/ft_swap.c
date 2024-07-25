/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:24:58 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/16 10:55:10 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

//main para teste
/*
//#include<stdio.h>
int main(void)
{
	int a = 10;
    int b = 20;

    printf("a: %d",a);
    printf(" b: %d",b);
    printf("\n");
    ft_swap(&a, &b);
    printf("a: %d",a);
    printf(" b: %d\n",b);
	return 0;
}
*/
