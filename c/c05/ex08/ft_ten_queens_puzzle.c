/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:22:57 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/25 12:02:50 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define TAB 10

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	draw_solution(int *pos_queen)
{
	int	i;

	i = 0;
	while (i < TAB)
	{
		ft_putchar(pos_queen[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

int	is_valid(int *pos_queen, int col, int row)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (pos_queen[i] == row
			|| pos_queen[i] + i == row + col
			|| pos_queen[i] - i == row - col)
			return (0);
		i++;
	}
	return (1);
}

void	find_solution(int *pos_queen, int queen, int *count)
{
	int	i;

	if (queen == TAB)
	{
		draw_solution(pos_queen);
		(*count)++;
	}
	else
	{
		i = 0;
		while (i < TAB)
		{
			if (is_valid(pos_queen, queen, i))
			{
				pos_queen[queen] = i;
				find_solution(pos_queen, queen + 1, count);
			}
			i++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	pos_queen[TAB];
	int	count;

	count = 0;
	find_solution(pos_queen, 0, &count);
	return (count);
}
/*
#include<stdio.h>
int	main(void)
{
	int	total = ft_ten_queens_puzzle();

	printf("total de possibilidades: %d\n", total);
}
*/