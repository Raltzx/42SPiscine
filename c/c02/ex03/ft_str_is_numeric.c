/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:45:08 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/18 12:20:42 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	has_numbers(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!*str)
		return (1);
	while (str[i] != '\0')
	{
		if (has_numbers(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
