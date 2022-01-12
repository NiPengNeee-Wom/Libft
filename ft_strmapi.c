/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:18:13 by yplag             #+#    #+#             */
/*   Updated: 2014/11/09 17:47:03 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (0);
	new_str = ft_strnew(ft_strlen(s));
	if (!new_str)
		return (NULL);
	while (*(s + i))
	{
		*(new_str + i) = f(i, *(s + i));
		i++;
	}
	return (new_str);
}
