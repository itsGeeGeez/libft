/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshung- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 13:53:04 by ttshung-          #+#    #+#             */
/*   Updated: 2022/04/29 13:53:07 by ttshung-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	size_t	n;

	n = 0;
	if (!dest && !src)
		return (NULL);
	while (n < count)
	{
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		n++;
	}
	return (dest);
}
