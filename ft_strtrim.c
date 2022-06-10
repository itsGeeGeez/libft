/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshung- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:23:50 by ttshung-          #+#    #+#             */
/*   Updated: 2022/06/03 14:23:51 by ttshung-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	if (s != 0 && set != 0)
	{
		i = 0;
		while (s[i] && ft_strchr(set, s[i]))
			i++;
		j = ft_strlen(s);
		while (s[j - 1] && ft_strchr(set, s[j - 1]) && j > i)
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (str)
			ft_strlcpy(str, &s[i], (j - i + 1));
	}
	return (str);
}
