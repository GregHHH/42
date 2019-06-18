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

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}

int main(void)
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(6));
	printf("%d\n", ft_find_next_prime(13));
	printf("%d\n", ft_find_next_prime(17));
	printf("%d\n", ft_find_next_prime(18));
}
