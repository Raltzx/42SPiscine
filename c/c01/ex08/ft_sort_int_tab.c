/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:39:43 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/17 13:40:12 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		temp = tab[i];
		j = i - 1;
		while (j >= 0 && tab[j] > temp)
		{
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = temp;
		i++;
	}
}

//int para testes
/*
#include<stdio.h>
void show(int *a)
{
    int i = 0;

	printf("a =");
	while (i < 5)
	{
		printf(" %d", a[i]);
		i++;
	}
    printf("\n");
}
int main()
{
	int a[5];
	a[0] = 5;
	a[1] = 4;
	a[2] = 45;
	a[3] = 1;
	a[4] = 9;

	show(&a);
    ft_sort_int_tab(&a, 5);
    show(&a);

}
*/
