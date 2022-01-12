/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:41:34 by yplag             #+#    #+#             */
/*   Updated: 2014/11/05 14:45:13 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*swap;

	swap = dest;
	while (*swap)
		swap++;
	while (*src)
	{
		*swap = *src;
		swap++;
		src++;
	}
	*swap = '\0';
	return (dest);
}
