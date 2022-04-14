/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshung- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:06:28 by ttshung-          #+#    #+#             */
/*   Updated: 2022/04/14 16:06:29 by ttshung-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *buf1, const void *buf2, size_t count)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)buf1;
	s2 = (unsigned char *)buf2;
	if (count == 0)
		return (0);
	while (s1[i] == s2[i] && i < count - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
