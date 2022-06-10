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
	size_t	i;

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
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	if (!s[i])
		return (0);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

static void	ft_get_next_str(char **next_str, unsigned int *strlen, char c)
{
	unsigned int	i;

	*next_str += *strlen;
	*strlen = 0;
	i = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[i])
	{
		if ((*next_str)[i] == c)
			return ;
		(*strlen)++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	unsigned int	word_count;
	unsigned int	i;
	unsigned int	strlen;
	char			*str;
	char			**arr;

	if (!s)
		return (NULL);
	word_count = ft_count_word(s, c);
	arr = malloc(sizeof(char *) * (word_count + 1));
	if (!arr)
		return (NULL);
	i = 0;
	str = (char *)s;
	strlen = 0;
	while (i < word_count)
	{
		ft_get_next_str(&str, &strlen, c);
		arr[i] = malloc(sizeof(char) * (strlen + 1));
		if (!arr)
			return (ft_free(arr));
		ft_strlcpy(arr[i++], str, strlen + 1);
	}
	arr[i] = NULL;
	return (arr);
}
