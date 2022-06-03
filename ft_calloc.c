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
	size_t	size_total;
	void	*ptr;

	size_total = count * size;
	ptr = malloc(size_total);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, size_total);
	return (ptr);
}
