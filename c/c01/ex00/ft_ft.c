/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 09:36:58 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/22 14:51:33 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

//main para teste

//#include<stdio.h>
int main(void)
{
	int a;

	a = 3;
	printf("%d\n",a);
	ft_ft(&a);
	printf("%d\n", a);

	return 0;
}
