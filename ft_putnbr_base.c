/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:48:11 by grhaton           #+#    #+#             */
/*   Updated: 2019/06/19 13:48:12 by grhaton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char b)
{
	write(1, &b, 1);
}

int		ft_verif_base(char *base)
{
	int i;
	int b;

	i = 0;
	if (base[0] == '\0' || base[i] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		b = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] == '\t' ||
			base[i] == '\n' || base[i] == '\v' || base[i] == '\f' ||
				base[i] == '\r' || base[i] == ' ')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[b] != '\0')
		{
			if (base[b] == base[i])
				return (0);
			++b;
		}
		++i;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int size_b;
	int final_nb[150];

	i = 0;
	size_b = 0;
	if (ft_verif_base(base) == 1)
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[size_b] != '\0')
			size_b++;
		while (nbr)
		{
			final_nb[i] = nbr % size_b;
			nbr = nbr / size_b;
			++i;
		}
		while (--i >= 0)
			ft_putchar(base[final_nb[i]]);
	}
}
