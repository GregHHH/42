/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:16:14 by grhaton           #+#    #+#             */
/*   Updated: 2019/06/13 19:16:39 by grhaton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main()
{
	char s1[] = "testostastosta";
	char s2[] = "abcdef";
	printf("%s\n", ft_strncpy(s1, s2, 5));
	char s[] = "testostastosta";
	char s3[] = "abcdef";
	printf("%s\n", strncpy(s, s3, 5));
	return 0;
}
