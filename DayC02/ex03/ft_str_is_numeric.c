/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:16:43 by grhaton           #+#    #+#             */
/*   Updated: 2019/06/13 14:16:45 by grhaton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	unsigned	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= 48 && str[c] <= 57))
		{
			return (0);
		}
		c++;
	}
	return (1);
}