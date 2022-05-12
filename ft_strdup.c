/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshung- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:54:59 by ttshung-          #+#    #+#             */
/*   Updated: 2022/05/12 18:55:00 by ttshung-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*buff;

	len = ft_strlen(s1);
	buff = malloc(sizeof(char) * (len + 1));
	if (!buff)
		return (0);
	ft_memcpy(buff, s1, len);
	buff[len] = 0;
	return (buff);
}
