/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:44:31 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/28 14:21:49 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	length;

	*range = NULL;
	if (min >= max)
		return (0);
	length = max - min;
	*range = malloc(length * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (i < length)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (length);
}
/*
#include <stdio.h>
int main(void)
{
	int *arr;
	int size = ft_ultimate_range(&arr, 0, 10);
	int i = 0;

	printf("size: %d\n", size);
	while (i < size)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
	return (0);
}
*/