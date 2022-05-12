/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshung- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:59:24 by ttshung-          #+#    #+#             */
/*   Updated: 2022/05/12 17:59:25 by ttshung-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (*needle == 0 || haystack == needle)
		return (*haystack);
	while (*haystack && --len)
	{
		if (!ft_strncmp(haystack, needle, needle_len))
			return (haystack);
		haystack++;
	}
	return (0);
}
