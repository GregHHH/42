/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:06:21 by grhaton           #+#    #+#             */
/*   Updated: 2019/06/12 14:06:22 by grhaton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int c;

	i = 0;
	while (dest[i] != '\0')
		i++;
	c = 0;
	while (src[c] != '\0')
	{
		dest[i] = src[c];
		++i;
		++c;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)//validé//
{
	char	dest[] = "a";
	char src[] = "bcdefghjkl";
	printf("%s\n", ft_strcat(dest, src));
	char	dest2[] = "a";
	char src2[] = "bcdefghjkl";
	printf("%s\n", strcat(dest2, src2));
}
