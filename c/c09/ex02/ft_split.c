/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:10:39 by jopereir          #+#    #+#             */
/*   Updated: 2024/07/31 16:26:07 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*add_word(char *str, int size)
{
	char	*result;
	int		i;

	result = NULL;
	result = malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (str[i] && i < size)
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_charset(str[i], charset))
		i++;
	return (i);
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	cnt;
	int	word_len;

	i = 0;
	cnt = 0;
	word_len = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		word_len = wordlen(str + i, charset);
		if (word_len > 0)
			cnt++;
		i += word_len;
		word_len = 0;
	}
	return (cnt);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		j;
	int		word_cnt;
	int		word_len;

	word_cnt = word_count(str, charset);
	result = malloc(sizeof(char *) * (word_cnt + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	word_len = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		word_len = wordlen(str + i, charset);
		if (word_len)
			result[j++] = add_word(str + i, word_len);
		i += word_len;
		word_len = 0;
	}
	result[j] = 0;
	return (result);
}
/*
#include <stdio.h>
int main()
{
	char a[]={"|||Hello|world|i'm|here"};
	char **b;
	int i = 0;
    b = ft_split(a, "|");
	while (b[i])
	{
		printf("%s\n", b[i]);
		i++;
	}
    free(b);
}
*/