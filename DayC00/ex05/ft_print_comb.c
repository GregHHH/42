/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:03:03 by grhaton           #+#    #+#             */
/*   Updated: 2019/06/05 10:03:37 by grhaton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}
void ft_affiche(int a, int b, int c)
{
	if ( a != b && a != c && b != c)
	{
		ft_putchar(a + '0');
		ft_putchar(b + '0');
		ft_putchar(c + '0');
		if (a != 7)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}
void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_affiche(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
