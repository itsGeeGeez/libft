/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshung- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:50:12 by ttshung-          #+#    #+#             */
/*   Updated: 2022/04/14 14:50:13 by ttshung-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchar(const void *b, int c, size_t size)
{
	const unsigned char	*cpy;
	size_t				i;

	cpy = (unsigned char *)b;
	i = 0;
	while (i < size)
	{
		if (cpy[i] == c)
			return ((void *)(b + i));
		i++;
	}
	return (NULL);
}
