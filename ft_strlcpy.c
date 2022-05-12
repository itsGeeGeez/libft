/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshung- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:11:26 by ttshung-          #+#    #+#             */
/*   Updated: 2022/05/12 18:11:27 by ttshung-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dstsize == 0 || dst == 0)
		return (src_len);
	if ((dstsize - 1) < src_len)
		src_len = (dstsize - 1);
	ft_memcpy(dst, src, src_len);
	dst[src_len] = 0;
	return (src_len);
}
