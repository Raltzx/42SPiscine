/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 11:17:55 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/28 14:34:58 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_base_check(char *str);
int	ft_base_index(char c, char *base);
int	ft_is_on_base(char c, char *base);
int	string_get_length(char *str);

int	number_get_length(long nbr, int base_len)
{
	int	i;

	if (nbr == 0)
		return (1);
	i = 0;
	if (nbr < 0)
	{
		nbr *= (-1);
		i++;
	}
	while (nbr > 0)
	{
		i++;
		nbr /= base_len;
	}
	return (i);
}

char	*ft_convert_to_string(long nbr, char *base, int nbr_size)
{
	char	*result;
	int		i;

	i = 0;
	result = malloc(sizeof(char) * (nbr_size + 1));
	if (!result)
		return (NULL);
	if (nbr < 0)
	{
		nbr = -nbr;
		result[0] = '-';
	}
	if (nbr == 0)
		result[0] = base[0];
	while (nbr > 0)
	{
		result[(nbr_size - 1) - i] = base[nbr % string_get_length(base)];
		nbr /= string_get_length(base);
		i++;
	}
	result[nbr_size] = '\0';
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	int		nb_len;
	char	*result;

	nb = ft_atoi_base(nbr, base_from);
	nb_len = number_get_length(nb, string_get_length(base_to));
	result = ft_convert_to_string(nb, base_to, nb_len);
	return (result);
}
