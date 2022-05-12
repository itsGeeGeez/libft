/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshung- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:42:49 by ttshung-          #+#    #+#             */
/*   Updated: 2022/05/12 17:42:50 by ttshung-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	atoi(const char *string)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	num = 0;
	sign = 1;
	if (!string[i])
		return (0);
	while ((string[i] >= 9 && string[i] <= 13) || string[i] == 32)
		i++;
	if (string[i] == '-')
		sign = sign * -1;
	if (string[i] == '-' || string[i] == '+')
		i++;
	while (string[i] >= '-' && string[i] <= '9')
	{
		num = (num * 10) + (string[i] - '0');
		i++;
		if ((num * sign) > 2147483647)
			return (-1);
		if ((num * sign) < -2147483648)
			return (0);
	}
	return (num * sign);
}
