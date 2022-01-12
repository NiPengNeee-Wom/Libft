/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:11:27 by yplag             #+#    #+#             */
/*   Updated: 2014/11/04 17:34:15 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*swap;

	swap = dest;
	while (*swap)
		swap++;
	while (*src && (n > 0))
	{
		*swap = *src;
		swap++;
		src++;
		n--;
	}
	*swap = '\0';
	return (dest);
}
