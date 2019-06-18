int	ft_iterative_power(int nb, int power)
{
	int i;
	int c;

	i = 1;
	c = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while ( i < power)
	{
		c *= nb;
		++i;
	}
	return (c);
}

int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 2));
	printf("%d\n", ft_iterative_power(2, 3));
	printf("%d\n", ft_iterative_power(2, 4));
	printf("%d\n", ft_iterative_power(0, 2));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(-1 , -4));
	printf("%d\n", ft_iterative_power(1, 1));
	printf("%d\n", ft_iterative_power(2, 5));
}
