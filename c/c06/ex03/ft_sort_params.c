/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:08:55 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/25 13:51:57 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_sign(int n)
{
	return ((n > 0) - (n < 0));
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (get_sign(s1[i] - s2[i]));
}

void	insertion_sort(char **str, int size)
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	while (i < size)
	{
		temp = str[i];
		j = i - 1;
		while (j >= 0 && ft_strcmp(str[j], temp) > 0)
		{
			str[j + 1] = str[j];
			j--;
		}
		str[j + 1] = temp;
		i++;
	}
}

void	draw_string(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}	
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 0)
		insertion_sort(&argv[1], argc - 1);
	i = 1;
	while (i < argc)
	{
		draw_string(argv[i]);
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
