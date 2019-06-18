int	ft_iterative_factorial(int nb)
{
	int i;
	int c;

	i = 1;
	c = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while ( i <= nb)
	{
		c *= i;
		++i;
	}
	return (c);
}

int main(void)
{
	printf("%d\n", ft_iterative_factorial(-1));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(2));
	printf("%d\n", ft_iterative_factorial(3));
	printf("%d\n", ft_iterative_factorial(4));
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(6));
	printf("%d\n", ft_iterative_factorial(12));
	printf("%d\n", ft_iterative_factorial(13));
}
