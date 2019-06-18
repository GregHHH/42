/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 19:18:36 by grhaton           #+#    #+#             */
/*   Updated: 2019/06/13 19:18:44 by grhaton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int sz;
	unsigned int i;

	sz = 0;
	while (src[sz] != '\0')
		sz++;
	if (size == 0)
		return (sz);
	i = 0;
	while (i < (size - 1))
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0')
			while (i < size - 1)
			{
				dest[i] = '\0';
				i++;
			}
	}
	dest[i] = '\0';
	return (sz);
}
