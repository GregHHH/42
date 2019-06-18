/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 12:49:33 by grhaton           #+#    #+#             */
/*   Updated: 2019/06/09 12:49:34 by grhaton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char b)
{
	write(1, &b, 1);
}

void	affichage(int nb)
{
	int tmp1;
	int tmp2;

	if (nb > 9)
	{
		tmp1 = nb / 10;
		tmp2 = nb % 10;
		ft_putchar(tmp1 + '0');
		ft_putchar(tmp2 + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + '0');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			affichage(a);
			ft_putchar(' ');
			affichage(b);
			if (a < 98 || b < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			++b;
		}
		++a;
	}
}
