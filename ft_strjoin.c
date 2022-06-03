/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshung- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:20:30 by ttshung-          #+#    #+#             */
/*   Updated: 2022/06/03 14:20:31 by ttshung-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned char	*string;
	int				i;
	int				j;

	string = malloc(sizeof(*string) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!string)
		return (NULL);
	ft_memcpy(string, s1, ft_strlen(s1));
	ft_memcpy(string, s2, ft_strlen(s2));
	string[ft_strlen(s1) + ft_strlen(s2) + 1] = 0;
	return (string);
}
