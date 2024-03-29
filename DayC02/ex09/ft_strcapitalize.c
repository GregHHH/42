/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:17:54 by grhaton           #+#    #+#             */
/*   Updated: 2019/06/13 14:18:00 by grhaton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		++i;
	}
	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
				if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
					if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
						str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
