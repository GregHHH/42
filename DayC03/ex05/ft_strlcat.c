/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:07:28 by grhaton           #+#    #+#             */
/*   Updated: 2019/06/12 14:07:29 by grhaton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int c;

	i = 0;
	while (dest[i] != '\0')
		++i;
	c = 0;
	while (src[c] != '\0')
		++c;
	if (size <= i)
		c = c + size;
	else
		c = c + i;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		++i;
		++j;
	}

	return (c);
}

int	main(void)
{
	char dest[150] = "banane";
	char src[] = " violette";
	int size = 0;
	printf("%u\n", ft_strlcat(dest, src, size));
	char dest2[150] = "banane";
	char src2[] = " violette";
	int size2 = 0;
	printf("%lu\n", strlcat(dest2, src2, size2));
	return (0);
}
