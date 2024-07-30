/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:59:17 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/28 14:21:20 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	size;

	arr = NULL;
	if (min >= max)
		return (NULL);
	size = max - min;
	arr = malloc(size * sizeof(int));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/*
#include <stdio.h>
int main(void)
{
	int min = 0;
	int max = 10;
	int *arr = ft_range(min, max);
	int i = 0;
	while (i < (max - min))
	{
		printf("%d, ", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
	return (0);
}
*/