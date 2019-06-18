int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
		return (nb * ft_recursive_power(nb , power - 1));
}

int	main(void)
{
	printf("%d\n", ft_recursive_power(2, 2));
	printf("%d\n", ft_recursive_power(2, 3));
	printf("%d\n", ft_recursive_power(2, 4));
	printf("%d\n", ft_recursive_power(0, 2));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(-1 , -4));
	printf("%d\n", ft_recursive_power(1, 1));
	printf("%d\n", ft_recursive_power(2, 5));
}
