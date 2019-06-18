int ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 1;
	if (nb < 0)
		return (0);
	while (sqrt * sqrt < nb)
		++sqrt;
	if (sqrt * sqrt == nb)
		return (sqrt);
	else
		return (0);
}

int	main(void)
{
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(36));
	printf("%d\n", ft_sqrt(2));
}
