/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:24:31 by yplag             #+#    #+#             */
/*   Updated: 2014/11/13 18:53:01 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char		*new_str;
	size_t		i;
	size_t		len;

	if (!s)
		return (0);
	len = ft_strlen(s) - 1;
	i = 0;
	while (ft_isspace(s[i]) && s[i])
		i++;
	if (!s[i])
		return (ft_strnew(1));
	while (len != i && ft_isspace(s[len]))
		len--;
	if (!i && len == ft_strlen(s) - 1)
	{
		new_str = ft_strsub(s, 0, ft_strlen(s));
		return (new_str);
	}
	new_str = ft_strsub(s, i, len - i + 1);
	if (!new_str)
		return (NULL);
	return (new_str);
}
