void	ft_putchar(char b)
{
	write(1, &b, 1);
}

void ft_parkour_conar(*base) {
	/* code */
}
void ft_print_conar()
{
	write(1, "-2147483648", 11);
}

void ft_putnbr_base(int nbr, char *base)
{
	int n;

	n = 0;
	if (nb == -2147483648)
	{
		ft_print_conar();
		return;
	}
	if (nb < 0)
	{
		ft_putchar ('-');
		n = nb * - 1;
	}
	else
		n = nb;
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar (n % 10 + '0');
	}
	else
	ft_putchar(n + '0');
}

int main(void)
{
	ft_putnbr(5476846);
}
