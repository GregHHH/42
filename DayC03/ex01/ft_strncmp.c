/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:05:37 by grhaton           #+#    #+#             */
/*   Updated: 2019/06/12 14:05:41 by grhaton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

int	main(void)//validé//
{
	char s1[] = "qwertyuios";
	char s2[] = "qwertyuiop";

	printf("%d\n", ft_strncmp(s1, s2, 150));
	printf("%d\n", strncmp(s1, s2, 150));
}
