/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:44:05 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/22 14:53:06 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

//main para teste

//#include<stdio.h>
int main(void)
{
	int a = 3;
    int *a2 = &a;
    int **a3 = &a2;
    int ***a4 = &a3;
    int ****a5 = &a4;
    int *****a6 = &a5;
    int ******a7 = &a6;
    int *******a8 = &a7;
    int ********a9 = &a8;


	printf("%d\n",a);
	ft_ultimate_ft(&a9);
	printf("%d\n", a);

	return 0;
}