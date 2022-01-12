/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:11:39 by yplag             #+#    #+#             */
/*   Updated: 2014/11/06 17:18:52 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strncpy(char *s1, const char *s2, size_t n)
{
	char			*fill;

	fill = s1;
	while (n > 0 && *s2 != '\0')
	{
		*fill++ = *s2++;
		--n;
	}
	while (n > 0)
	{
		*fill++ = '\0';
		--n;
	}
	return (s1);
}