/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:50:02 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/13 16:48:51 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	char	sign;

	sign = 'P';
	if (n < 0)
	{
		sign = 'N';
	}
	write(1, &sign, 1);
}
/*
int main(void)
{
	ft_is_negative(0);
}
*/
