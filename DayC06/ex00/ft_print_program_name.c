
#include <unistd.h>

void	ft_putchar(char b)
{
	write(1, &b, 1);
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int i;

	i = 0;
	while (argv[0][i] != '\0' && argc)
	{
		ft_putchar(argv[0][i]);
		++i;
	}
	ft_putchar('\n');
}
