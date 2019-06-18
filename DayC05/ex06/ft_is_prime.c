int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb / i * i == nb)
			return (0);
		++i;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(11));
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(17));
	printf("%d\n", ft_is_prime(18));
}
