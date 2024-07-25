/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:48:49 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/13 16:52:01 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	char	digit;
	int		i;

	i = 0;
	while (i <= 9)
	{
		digit = '0' + i;
		write(1, &digit, 1);
		i++;
	}
}
/*
int main(void)
{
	ft_print_numbers();
}
*/
