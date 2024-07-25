/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:22:39 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/18 12:27:52 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowcase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (!*str)
		return (1);
	while (str[i] != '\0')
	{
		if (is_lowcase(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
