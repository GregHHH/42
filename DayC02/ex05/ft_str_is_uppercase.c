/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:17:01 by grhaton           #+#    #+#             */
/*   Updated: 2019/06/13 14:17:02 by grhaton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	unsigned int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= 65 && str[c] <= 90))
		{
			return (0);
		}
		c++;
	}
	return (1);
}
