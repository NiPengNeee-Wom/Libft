/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:58:35 by yplag             #+#    #+#             */
/*   Updated: 2015/02/22 15:32:52 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned	int i;

	i = 1;
	if (n < 0)
	{
		n = n * (-1);
		ft_putchar_fd('-', fd);
	}
	while ((n / i) >= 10)
		i = i * 10;
	while ((i > 0))
	{
		ft_putchar_fd(((n / i) % 10) + 48, fd);
		i = i / 10;
	}
}
