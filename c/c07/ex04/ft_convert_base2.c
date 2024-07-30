/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 09:57:11 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/28 14:28:43 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		number_get_length(long nbr, int base_len);
char	*ft_convert_to_string(long nbr, char *base, int nbr_size);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	string_get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_on_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_base_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
			return (0);
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = 0;
		while (j < i)
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	long	number;

	i = 0;
	if (string_get_length(base) <= 1 || !ft_base_check(base))
		return (0);
	while (str[i] && (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v'))
		i++;
	sign = 1;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	number = 0;
	while (str[i] && ft_is_on_base(str[i], base))
	{
		number = number * string_get_length(base) + ft_base_index(str[i], base);
		i++;
	}
	return (sign * number);
}
