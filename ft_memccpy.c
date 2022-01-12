/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:59:32 by yplag             #+#    #+#             */
/*   Updated: 2014/11/09 17:35:15 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*tmp_d;
	char	*tmp_s;
	char	car;

	car = (char)c;
	tmp_s = (char*)src;
	tmp_d = (char*)dest;
	while (n != 0 && *tmp_s != car)
	{
		*tmp_d = *tmp_s;
		tmp_d++;
		tmp_s++;
		n--;
	}
	if (*tmp_s == car)
	{
		*tmp_d = *tmp_s;
		return ((void*)++tmp_d);
	}
	return (NULL);
}
