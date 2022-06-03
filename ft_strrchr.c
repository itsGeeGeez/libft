/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshung- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:22:15 by ttshung-          #+#    #+#             */
/*   Updated: 2022/06/03 14:22:16 by ttshung-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *string, int c)
{
	unsigned int	i;

	i = 0;
	while (string[i])
		i++;
	while (i >= 0)
	{
		if (string[i] == (unsigned char)c)
			return ((unsigned char *)(string + i));
		i--;
	}
	return (NULL);
}
