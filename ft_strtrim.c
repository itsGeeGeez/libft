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

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		j = ft_strlen(s1);
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]))
			j--;
		if (j > i)
			return (0);
		str = malloc(sizeof(unsigned char) * (j - i + 1));
		if (!str)
			return (NULL);
		ft_strlcpy(str, s1 + i, j - i + 1);
	}
	return (str);
}
