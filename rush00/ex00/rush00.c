/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 10:54:02 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/15 14:52:20 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	horizontal_line(int x, char o, char line)
{
	int	i;

	ft_putchar(o);
	i = 1;
	while (i <= x - 2)
	{
		ft_putchar(line);
		i++;
	}
	if (x > 1)
	{
		ft_putchar(o);
	}
	ft_putchar('\n');
}

void	vertical_line(int x, int y, char pipe)
{
	int	i;

	while (y > 2)
	{
		i = 2;
		ft_putchar(pipe);
		while (x > i++)
		{
			ft_putchar(' ');
		}
			ft_putchar(pipe);

		ft_putchar('\n');
		y--;
	}
}

void	rush(int x, int y)
{
	if (y >= 1)
	{
		horizontal_line(x, 'o', '-');
	}
	vertical_line(x, y, '|');
	if (y >= 2)
	{
		horizontal_line(x, 'o', '-');
	}
}