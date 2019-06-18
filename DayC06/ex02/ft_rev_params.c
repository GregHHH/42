#include <unistd.h>

void	ft_putchar(char b)
{
	write(1, &b, 1);
}

int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int i;
	int v;

	i = argc - 1;
	v = 1;
	while (i != 0)
	{
		v = 0;
		while (argv[i][v] != '\0')
		{
			ft_putchar(argv[i][v]);
			++v;
		}
		ft_putchar('\n');
		i--;
	}
}
