/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_baru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:02:11 by abasarud          #+#    #+#             */
/*   Updated: 2022/04/06 10:02:17 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}