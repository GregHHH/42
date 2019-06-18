/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:06:49 by grhaton           #+#    #+#             */
/*   Updated: 2019/06/05 09:06:51 by grhaton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int x)
{
	char p;
	char n;

	p = 'P';
	n = 'N';
	if (x >= 0)
	{
		write(1, &p, 1);
	}
	else
		write(1, &n, 1);
}