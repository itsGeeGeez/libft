/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshung- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:17:54 by ttshung-          #+#    #+#             */
/*   Updated: 2022/06/03 14:17:55 by ttshung-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **arr)
{
	unsigned int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

int	ft_count_word(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	ft_get_next_str(char **next_str, unsigned int *next_str_len, char c)
{
	unsigned int	i;

	*next_str += *next_str_len;
	*next_str_len = 0;
	i = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[i])
	{
		if ((*next_str)[i] == c)
			return;
		(*next_str_len)++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	unsigned int	word_count;
	unsigned int	i;
	unsigned int	next_str_len;
	char			*next_str;
	char			**string;

	if (!s)
		return (NULL);
	word_count = ft_count_word(s, c);
	string = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!string)
		return (NULL);
	i = 0;
	next_str = (char *)s;
	next_str_len = 0;
	while (i <= word_count)
	{
		ft_get_next_str(&next_str, &next_str_len, c);
		string[i] = malloc(sizeof(char) * (next_str_len + 1));
		if (!string)
			return (ft_free(string));
		ft_strlcpy(string[i++], next_str, next_str_len + 1);
	}
	string[i] = NULL;
	return (string);
}
