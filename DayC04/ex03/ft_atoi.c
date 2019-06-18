
int	ft_atoi(char *str)
{
	int i;
	int n;
	int nbr;

	i = 0;
	n = -1;
	nbr = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		++i;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n *= -1;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = 10 * nbr - (str[i] - '0');
		i++;
	}
	return (n * nbr);
}

int	main(void)
{
	printf("%d\n", ft_atoi("  --+---++-+-212907ayvfi74"));
}
