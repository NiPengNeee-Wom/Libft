/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:26:25 by yplag             #+#    #+#             */
/*   Updated: 2014/11/10 16:56:28 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	length(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	int		sign;

	if (n == -2147483647 - 1)
		return ("-2147483648");
	len = length(n);
	sign = 0;
	if (n < 0)
	{
		n = -n;
		sign = 42;
		len++;
	}
	str = ft_strnew(len);
	if (!str)
		return (0);
	str[--len] = n % 10 + '0';
	while (n /= 10)
		str[--len] = n % 10 + '0';
	if (sign)
		str[0] = '-';
	return (str);
}
