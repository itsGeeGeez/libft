/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshung- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:41:50 by ttshung-          #+#    #+#             */
/*   Updated: 2022/05/12 17:41:51 by ttshung-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	size_t			dst_len;
	size_t			src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	j = dst_len;
	i = 0;
	if (dstsize > dst_len && dstsize > 0)
	{
		while (src[i] && j < (unsigned int)dstsize - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
		return (dst_len + src_len);
	}
	return (dstsize + src_len);
}
