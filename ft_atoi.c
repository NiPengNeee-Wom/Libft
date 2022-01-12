/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:32:27 by yplag             #+#    #+#             */
/*   Updated: 2014/11/10 19:05:37 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		sign;
	int		num;

	sign = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign = 42;
	if (*str == '-' || *str == '+')
		str++;
	num = 0;
	while (*str && ft_isdigit(*str))
	{
		num = num * 10 + *str - '0';
		str++;
	}
	if (sign)
		num = -num;
	return (num);
}
