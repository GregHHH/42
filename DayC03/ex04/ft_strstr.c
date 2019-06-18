/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:08:14 by grhaton           #+#    #+#             */
/*   Updated: 2019/06/12 14:08:14 by grhaton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int c;

	if (!to_find[0])
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] == to_find[0])
		{
			c = 0;
			while(str[c + i] == to_find[c])
			{
				if (to_find[c] == '\0')
					return (&str[i]);
				++c;
			}
			if (to_find[c] == '\0')
				return (&str[i]);
		}
		++i;
	}
	return (0);
}

int main(void) //vaidé
{
	char str[150] = "fuklamoulinetmagle";
	char to_find[] = "le";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s", strstr(str, to_find));
}
