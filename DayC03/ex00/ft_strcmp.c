/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:05:19 by grhaton           #+#    #+#             */
/*   Updated: 2019/06/12 14:05:23 by grhaton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] == '\0' && s2 != '\0') || (s1[i] != '\0' && s2[i] == '\0'))
		return (s1[i] - s2[i]);
	return (0);
}

int main(void) //validé//
{
char s1[] = "x";
char s2[] = "a";
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", strcmp(s1, s2));
	return 0;
}
