/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:33:36 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/18 12:44:37 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (! *str)
		return (1);
	while (str[i] != '\0')
	{
		if (is_printable(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
