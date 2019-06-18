
#include <unistd.h>

void	ft_putchar(char v)
{
	write(1, &v, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
