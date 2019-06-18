/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:06:58 by grhaton           #+#    #+#             */
/*   Updated: 2019/06/12 14:07:08 by grhaton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int c;

	i = 0;
	while (dest[i] != '\0')
		i++;
	c = 0;
	while (src[c] != '\0' && c < nb)
	{
		dest[i] = src[c];
		++i;
		++c;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)//validé//
{
	char dest[100] = "test";
	char src[504] = "asto";
	printf("%s\n", ft_strncat(dest, src, 3));
	printf("%s\n", strncat(dest, src, 3));
}
