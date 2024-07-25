/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:26:40 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/17 10:10:29 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		size--;
		i++;
	}
}

//main para teste
/*
#include<stdio.h>

void loop_a(int *a)
{
    int i = 0;

    printf("a =");
    while (i < 5)
    {
        a[i] = i;
        printf(" %d", a[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
	int a[5];
	int i;

	loop_a(&a);
	ft_rev_int_tab(&a, 5);
	printf("a =");
	while (i < 5)
	{
		printf(" %d", a[i]);
		i++;
	}
    printf("\n");

	return 0;
}
*/
