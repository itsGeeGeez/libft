/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshung- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:48:31 by ttshung-          #+#    #+#             */
/*   Updated: 2022/05/12 18:48:32 by ttshung-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			size_total;
	unsigned char	*ptr;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	size_total = count * size;
	ptr = (unsigned char *)malloc(size_total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size_total);
	return (ptr);
}
