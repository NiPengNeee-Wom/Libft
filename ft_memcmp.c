/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:02:02 by yplag             #+#    #+#             */
/*   Updated: 2014/11/10 20:04:45 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*t1;
	const unsigned char		*t2;

	t1 = (const unsigned char*)s1;
	t2 = (const unsigned char*)s2;
	while (n)
	{
		if (*t1 != *t2)
			return (*(unsigned char*)t1 - *(unsigned char*)t2);
		n--;
		t1++;
		t2++;
	}
	return (0);
}
